import java.util.Scanner;

public class r2 {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        int r1  = input.nextInt();
        int s = input.nextInt();
        
        System.out.print(s * 2 - r1);
    }
}