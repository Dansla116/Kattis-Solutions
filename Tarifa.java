import java.util.Scanner;

public class Tarifa {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int x = Integer.parseInt(input.nextLine());
        int n = Integer.parseInt(input.nextLine());
        int[] p = new int[n];
        
        int result = x * (n + 1);
        
        for (int i = 0; i < n; i++) {
            p[i] = Integer.parseInt(input.nextLine());
            result = result - p[i];
        }
        
        System.out.print(result);
    }
}