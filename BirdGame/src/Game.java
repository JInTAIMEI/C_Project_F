import java.awt.Component;
import javax.swing.JFrame;

public class Game {
    public Game() {
    }

    public static void main(String[] args) {
        JFrame jFrame = new JFrame();
        jFrame.setSize(400, 650);
        jFrame.setLocationRelativeTo((Component)null);
        jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        BirdGame birdGame = new BirdGame();
        jFrame.add(birdGame);
        jFrame.setVisible(true);
        birdGame.Starting();
    }

}