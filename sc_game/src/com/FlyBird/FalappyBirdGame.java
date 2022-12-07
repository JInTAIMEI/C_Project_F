package com.FlyBird;
import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.event.KeyAdapter;
import java.awt.event.KeyEvent;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;
import java.util.Random;
import javax.imageio.ImageIO;
import javax.swing.JFrame;
import javax.swing.JPanel;
public class FalappyBirdGame {
    //内部接口,测试用
/* public static void main(String[] args) {
start_init();//调用初始化
}*/
    public static void start_init() {
        JFrame exp1 = new JFrame("会飞的小鸟 ver2.0 作者:DR");//创建窗口
        exp1.setSize(432, 674);//设置窗口大小,要调参数记得改相关使用的函数
//exp1.setAlwaysOnTop(false); 设置为置顶窗口,可选
        exp1.setLocationRelativeTo(null);//默认位置
        exp1.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);//退出方式(学校要求的)
        exp1.setResizable(false);//大小是否可调节
        Sky sky = new Sky();//实例化对象,主要实现Sky类的内容
        exp1.add(sky);//添加对象(部件)
// 显示图形界面
        exp1.setVisible(true);
//捕捉动作
        sky.action();
//System.exit(1);//正常结束(自己经常用的)
    }
}
class Sky extends JPanel {
    BufferedImage bgBufferImage; // 背景图片
    Ground ground = new Ground(); //地面
    Column column1 = new Column(350); //钢管1
    Column column2 = new Column(600); //钢管2
    static Bird bird = new Bird(); //小鸟
    static int birdVx =10;//小鸟的水平速度(推荐5~50)
    BufferedImage startBufferImage; //开始准备界面
    boolean isStrat; //是否开始游戏(判断用)
    BufferedImage overBufferImage; //游戏结束界面
    boolean isOver; // 游戏是否结束
    //构造方法
    public Sky() {
        super();//调用父类,有新的子类先调用子类
// 读取图片
        File bgImage = new File("images/bg.png"); //背景图
        File starImage = new File("images/start.png"); //开始页面
        File overImage = new File("images/gameover.png"); //游戏结束页面
        try {
//赋值给成员变量
            bgBufferImage = ImageIO.read(bgImage);
            startBufferImage = ImageIO.read(starImage);
            overBufferImage = ImageIO.read(overImage);
        } catch (IOException e) {
            e.printStackTrace();
            System.out.println("=====================分隔线 ===========================");
            System.out.println("错误的中文意思:");
            System.out.println("图片路径错误,请检查路径!");
        }
    }
    // 绘制界面方法(覆写了,会被super调用,不用担心调用问题)
    @Override
    public void paint(Graphics graphics) {
// 画背景
        graphics.drawImage(bgBufferImage, 0, 0, null);
// 画小鸟
        graphics.drawImage(bird.biBufferImage, bird.bird_x - bird.bird_width / 2,
                bird.bird_y - bird.bird_height / 2, null);
//drawImage参数
//img - 要绘制的指定图像。 如果img为空，此方法不执行任何操作
//x - x坐标
//y - y坐标
//observer - 转换更多的图像时要通知的对象
//gg.rotate(bird.ratation, bird.bird_x, bird.bird_y);
// 画钢管
        graphics.drawImage(column1.coBufferImage, column1.column_x - column1.width / 2,
                column1.column_y - column1.height / 2, null);
        graphics.drawImage(column2.coBufferImage, column2.column_x - column2.width / 2,
                column2.column_y - column2.height / 2, null);
// 画地面
        graphics.drawImage(ground.grBufferImage, ground.ground_x, ground.ground_y,
                null);
// 画文字
//graphics.setColor(Color.BLUE);
//graphics.setFont(new Font("楷体", Font.ITALIC, 30));
// 画开始准备图片
        if (isStrat!=true && isOver!=true) {
            graphics.drawImage(startBufferImage, 0, 0, null);
        }
// 画结束界面
        if (isOver) {
            graphics.drawImage(overBufferImage, 0, 0, null);
        }
    }
    // 游戏点击逻辑部分
    public void action() {
// 添加鼠标监听器
        MouseAdapter adapter = new MouseAdapter() {
            @Override
            public void mousePressed(MouseEvent e) {
// System.out.println("点击了鼠标");
                /*
                 * 若游戏结束重新开始游戏,游戏恢复初始状态
                 * 若未结束:起飞芜湖~
                 */
                if (isOver==true) {//结束后重新开始游戏,再绘制
                    bird = new Bird();//后方有实现方法
                    ground = new Ground();//同上
                    column1 = new Column(250);
                    column2 = new Column(600);
                    isOver = false;
                    isStrat = false;
                } else {
                    bird.refly();//重新起飞
                    isStrat = true;
                }
            }
        };//注意我的鼠标事件是在这里结束的,这个是内部代码块
        this.addMouseListener(adapter);//添加进去
        while (true) {
// 判断游戏是否开始
            if (isStrat==true && isOver==false) {
                ground.move();//地面移动
                column1.move();//管子1
                column2.move();//管子2
                bird.change();//飞动画面
                bird.Ymove_go();//Y轴移动
            }
// 判断撞击障碍的长度
            if (bird.bird_x - bird.bird_width / 2 == column1.column_x + column1.width /
                    2 || bird.bird_x - bird.bird_width / 2 == column2.column_x + column2.width / 2) {
            }
//撞到没
            if (bird.hit(ground) || bird.hit(column1) || bird.hit(column2)) {
//结束,条件判断
                isStrat = false;
                isOver = true;
            }
            try {
                Thread.sleep(birdVx);//速度参数的调用
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            repaint();//重绘(加速调用)
        }
    }
}
// 地面类
class Ground {
    int ground_x, ground_y; // 地面的坐标
    BufferedImage grBufferImage; // 地面图片
    //图层固定
    public Ground() {
        super();//调用父类
        File grImage = new File("images/ground.png");
        try {
            grBufferImage = ImageIO.read(grImage);
        } catch (IOException e) {
            e.printStackTrace();
        }
        ground_y = 500;//不能调,地面的坐标
    }
    // 地面动画方法
    public void move() {
        ground_x-=2; //地面的移动速度,取值范围推荐(1~10以内)
        if (ground_x < -110) {
            ground_x = 0; //重置
        }
    }
}
// 钢管类
class Column {
    int column_x, column_y; // 钢管的中心坐标
    int Columnspeed =6;//管子移动速度(1-8以内吧,要不然太难玩了)
    int width, height; // 宽度高度
    int gap = 150; // 钢管的空隙
    Random random = new Random();
    // 随机坐标
    BufferedImage coBufferImage; // 钢管图片
    //管子设置
    public Column(int x) {
        super();
        File coImage = new File("images/column.png");
        try {
            coBufferImage = ImageIO.read(coImage);
        } catch (IOException e) {
            e.printStackTrace();
        }
        column_x = x;//x轴设置
        column_y = random.nextInt(180) + 150; //随机值
        width = coBufferImage.getWidth();
        height = coBufferImage.getHeight();
    }
    // 钢管动画方法
    public void move() {
        column_x-=Columnspeed;//管子推移的速度
        if (column_x < -(width / 2)) {
            column_y = random.nextInt(180) + 150;
            column_x = 432 + width / 2;
        }
    }
}
// 鸟类
class Bird {
    int bird_x = 60, bird_y = 300; // 开始游戏鸟的位置(可以调,自己一下一下调,现在的参数是我认为的最好的)
    int bird_width, bird_height; // 鸟的宽度,高度用于判断撞击
    double speed = 20; // Y轴速度
    double g = 4; // 加速度g(推荐2-8以内)
    double s; // 运动距离
    double t = 0.3; // 运动时间(推荐不改,0.5就飞速下坠)
    BufferedImage biBufferImage; // 鸟图片
    BufferedImage[] images = new BufferedImage[8];//图片数组,实现自动上下飞
    /*//数组初始化方法----------------------只是将int类型替换成BufferedImage
    int[] arr1 =new int[10];
    int[] arr2 =new int[] {1,2,3,4,5,6,7,8};
    int[] arr3 ={1,2,3,4,5};*/
// 小鸟展翅动画方法
    int index = 0;//用于图片数组的判断
    //固定图层
    public Bird() {
        super();//调用父类
        for (int i = 0; i < images.length; i++) {
            File biImage = new File("images/" + i + ".png");
            try {
                images[i] = ImageIO.read(biImage);
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        biBufferImage = images[0];
        bird_width = biBufferImage.getWidth();
        bird_height = biBufferImage.getHeight();
    }
    //跳转选择动画(上下飞)
    public void change() {
        index++;
        biBufferImage = images[(index /8) % 8];//3(只有前面的8可以改,推荐8~12)下一张图片,8是保证0-7的下表,并且80会重置
    }
    //Y轴移动
    public void Ymove_go() {
        double Vy0 = speed;
        s = Vy0 * t - 0.5 * g * t * t; //s=vt-0.5*g*t*t
        double vt = Vy0 - g * t; //下坠速度
        speed = vt;
        bird_y = bird_y - (int) s;
        if (bird_y <= bird_height / 2) {
            bird_y = bird_height / 2;
        }
    }
    // 重新飞翔,赋予初始值
    public void refly() {
        speed = 20;
    }
    // 撞击地面
    public boolean hit(Ground ground) {
        return bird_y + bird_height / 2 >= ground.ground_y;
    }
    // 撞击钢管
    public boolean hit(Column column) {
        int left_x = column.column_x - column.width / 2 - bird_width / 2;//这个直接来问,不方便解释
        int right_x = column.column_x + column.width / 2 + bird_width / 2;
        int top_y = column.column_y - column.gap / 2 + bird_height / 2 - 5;
        int down_y = column.column_y + column.gap / 2 - bird_height / 2 + 5;
        if (bird_x > left_x && bird_x < right_x) {
            if (bird_y > top_y && bird_y < down_y) {
                return false;
            } else {
                return true;
            }
        } else {
            return false;
        }
    }
}