import sun.security.mscapi.CPublicKey;

import javax.imageio.ImageIO;
import javax.swing.*;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.image.BufferedImage;
import java.io.IOException;

public class BirdGame extends JPanel {
    //图片暂存区对象
    public BufferedImage image, start, gameover;
    Ground ground;
    Bird bird;
    Guangdao guangdao;
    public int score = 0;
    public int State = 0;
    public final int Start = 0;
    public final int Running = 1;
    public final int Over = 2;
    public Guangdao[] images = new Guangdao[2];//创建管道数组


    public BirdGame() {//构造方法,在类调用的时候就会执行的方法
        //getResource获取资源文件
        //getClass获取类
        //通过流的方式把资源文件读取到当前类中并赋予给缓存区对象
        try {
            ground = new Ground();
            bird = new Bird();
            image = ImageIO.read(getClass().getResource("image/bg.png"));
            start = ImageIO.read(getClass().getResource("image/start.png"));
            gameover = ImageIO.read(getClass().getResource("image/gameover.png"));
            ground.image = ImageIO.read(getClass().getResource("image/ground.png"));
            images[0] = new Guangdao();
            images[1] = new Guangdao();
        } catch (IOException e) {
            //e.printStackTrace();
            System.out.println("文件不存在!");
        }
    }

    //重写方法
    //可以把图片画入面板
    //重写底层原有的方法
    @Override
    public void paint(Graphics g) {
        //imageObserver要告诉的对象
        super.paint(g);
        g.drawImage(image, 0, 0, null);
        g.drawImage(bird.image, bird.x, bird.y, null);
        switch (State) {
            case Start:
                g.drawImage(start, 0, 0, null);
                break;
            case Running:
                setScore(g);
                g.drawString("分数" + score + "", 40, 70);
                g.drawImage(images[0].image, images[0].x, images[0].y, null);
                g.drawImage(images[1].image, images[1].x, images[1].y, null);
                break;
            case Over:
                g.drawImage(gameover, 0, 0, null);
                break;
        }
        g.drawImage(ground.image, ground.x, ground.y, null);
    }

    public void Starting() {
        this.addMouseListener(new BirdMouseLinteer());
        while (true) {
            switch (State) {
                case Start:
                    ground.stop();
                    bird.fly();
                    break;
                case Running:
                    ground.stop();
                    bird.fly();
                    bird.down();
                    if (low() || top()) {//当小鸟碰到地面时结束
                        State = Over;
                    }
                    for (int i = 0; i < images.length; i++) {
                        Guangdao column = images[i];
                        column.move();
                        boolean b = GetHitColunm(column);
                        if (b) {
                            State = Over;
                            break;
                        }

                            if (bird.x == column.x + column.width) {
                                //分数自增
                                score++;
                            }


                    }
                    break;
                case Over:
                    break;
            }
            repaint();
            try {
                Thread.sleep(400 / 60);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }

    class BirdMouseLinteer extends MouseAdapter {
        public void mousePressed(MouseEvent e) {
            super.mousePressed(e);
            switch (State) {
                case Start:
                    State = Running;
                    break;
                case Running:
                    bird.up();
                    break;
                case Over:
                    State = Start;
                    score = 0;
                    bird.x = 120;
                    bird.y = 220;
                    bird.speed = 0;
                    guangdao = new Guangdao();
                    guangdao.count = 0;
                    images[0] = new Guangdao();
                    images[1] = new Guangdao();
                    break;

            }
        }
    }

    public boolean low() {
        if (bird.y < ground.y - bird.width + 8) {
            return false;
        } else {
            return true;
        }
    }

    public boolean top() {
        if (bird.y > 0) {
            return false;
        } else {
            return true;
        }
    }

    public boolean GetHitColunm(Guangdao column) {
        //先考虑x轴是否在范围内
        //1.小鸟在管道左侧: 小鸟的x轴坐标 >= 管道的x轴坐标 - 小鸟图片的宽度
        //2.小鸟在管道右侧: 小鸟的x轴坐标 <= 管道的x轴坐标 + 管道图片的宽度
        if (bird.x >= column.x - bird.width && bird.x <= column.x + column.width) {
            //小鸟在范围内
            //考虑小鸟的y轴坐标
            //半个管道的长度=管道的高度/2 - 管道的缝隙/2
            //1.小鸟在上半部分:小鸟的y轴坐标 <= 管道的y轴坐标 + 半个管道的长度
            //2.小鸟在下半部分:小鸟的y轴坐标 >= 管道的y轴坐标 + 管道的高度/2 +管道的缝隙/2 -小鸟的高度
            if (bird.y <= (column.y + column.height / 2 - column.gap / 2)
                    || bird.y >= (column.y + column.height / 2 + column.gap / 2 - bird.height)) {
                //小鸟不在缝隙中
                return true;
            } else {
                return false;
            }
        } else {
            //小鸟不在范围内
            return false;
        }

    }

    public void setScore(Graphics g) {
        //设置积分
        Font font = new Font(Font.SERIF, Font.ITALIC, 40);
        //把字体加入绘制
        g.setFont(font);
        //设置颜色
        g.setColor(Color.WHITE);


    }
}




