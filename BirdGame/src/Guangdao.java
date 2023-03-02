import javax.imageio.ImageIO;
import java.awt.*;
import java.awt.image.BufferedImage;
import java.awt.image.ImageObserver;
import java.awt.image.ImageProducer;
import java.io.IOException;
import java.util.Random;

public class Guangdao  {
    public BufferedImage image;
    public int x,y;
    int width;
    int height;
    int gap=144;
    public static int count=0;
    public int distance=270;
    public Random random=new Random(); //生成随机数//两个管道直接的间隔

    public Guangdao(){
        try{
            image= ImageIO.read(getClass().getResource("image/column.png"));
            //第一个管道的x轴:410+distance*0
            //第二个管道的x轴:410+distance*1
            //第三个管道的x轴:410+distance*2
            //第四个管道的x轴:410+distance*3
            x=410+distance*count;
            width=image.getWidth();
            height=image.getHeight();
            y=random.nextInt(300)+100-height/2;
        }catch (IOException e){
            System.out.println("文件不存在！");
        }
        //控制x轴距离
        System.out.println(count);
        count++;
    }
    public void move(){
        x--;
        if(x==-width){
            x=-x+distance*2;
            y=random.nextInt(300)+100-height/2;
        }
    }

}
