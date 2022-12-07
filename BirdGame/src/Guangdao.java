import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;
import java.io.IOException;

public  class Guangdao {
    public BufferedImage image;
    public int x,y;
    int width;
    public static int count=0;
    public int distance=270;    //两个管道直接的间隔

    public Guangdao(){
        try{
            image= ImageIO.read(getClass().getResource("column.png"));
            //第一个管道的x轴:410+distance*0
            //第二个管道的x轴:410+distance*1
            //第三个管道的x轴:410+distance*2
            //第四个管道的x轴:410+distance*3
            x=410+distance*count;
            y=-200;
            width=image.getWidth();
        }catch (IOException e){
            System.out.println("文件不存在！");
        }
        System.out.println(count);
        //控制x轴距离
        count++;
    }
    public void move(){
        x--;
        if(x==-width){
            x=450;
        }
    }
}
