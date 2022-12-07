import java.awt.image.BufferedImage;

public class Ground {
    public BufferedImage image;
    int x=0;
    int y=498;
    public  void stop(){
        x--;
        if(x==-100){
            x=0;
        }
    }
}
