import java.util.Scanner;

public class faktor {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        int a = input.nextInt();
        int i = input.nextInt();
        
        System.out.print(a * (i - 1) + 1);
    }
}