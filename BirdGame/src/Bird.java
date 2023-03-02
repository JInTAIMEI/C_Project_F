import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;
import java.io.IOException;

public class Bird {
    public BufferedImage image;
    public BufferedImage images[];
    int x = 100;
    int y = 200;
    public double speed = 0; //初始上抛速度
    public double upSpeed = 20; //上抛速度
    public double t = 0.2;    //位移时间
    public double g = 3;    //重力加速度
    public double s = 0;      //经过t秒后小鸟的位移距离
    public int width;
    public int height;

    public Bird() {
        try {
            image=ImageIO.read(getClass().getResource("image/0.png"));
            images = new BufferedImage[8];
            for (int i = 0; i < images.length; i++) {
                images[i] = ImageIO.read(getClass().getResource("image/" + i + ".png"));
            }
            width = image.getWidth();
            height=image.getHeight();
        } catch (IOException e) {
            System.out.println("文件不存在!");
        }
    }

    public int index = 0;

    public void fly() {//小鸟飞翔的方法
        index++;
        image = images[index / 10 % 8];
    }

    public void up() {//小鸟速度赋值
        speed = upSpeed;
    }

    public void down() {//小鸟移动效果
        double v = speed;
        s = v * t - g * t * t / 2; //小鸟上抛的距离减去向下自由落体的距离
        y = y - (int) s;//小鸟原y轴坐标-小鸟上升距离=小鸟新坐标
        speed = v - g * t;//小鸟上抛速度-小鸟自由落体速度=小鸟新速度
    }
}
