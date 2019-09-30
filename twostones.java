import java.util.Scanner;

public class twostones {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        if (input.nextInt() % 2 == 1) {
            System.out.print("Alice");
        } else {
            System.out.print("Bob");
        }
    }
}