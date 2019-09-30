import java.util.Scanner;

public class bijele {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        int king = input.nextInt();
        int queen = input.nextInt();
        int rook = input.nextInt();
        int bishop = input.nextInt();
        int knight = input.nextInt();
        int pawn = input.nextInt();
        
        System.out.print((1 - king) + " " +
                         (1 - queen) + " " +
                         (2 - rook) + " " +
                         (2 - bishop) + " " +
                         (2 - knight) + " " +
                         (8 - pawn));
    }
}