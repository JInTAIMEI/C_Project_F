import java.awt.Component;
import javax.swing.JFrame;

public class Game {
    public Game() {
    }

    public static void main(String[] args) {
        JFrame jFrame = new JFrame();
        jFrame.setSize(400, 650);
        jFrame.setLocationRelativeTo((Component)null);
        jFrame.setDefaultCloseOperation(3);
        BirdGame birdGame = new BirdGame();
        jFrame.add(birdGame);
        jFrame.setVisible(true);
        birdGame.Starting();
    }
}