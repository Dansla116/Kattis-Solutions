import java.lang.Math;
import java.lang.Integer;
import java.text.DecimalFormat;
import java.util.Arrays;
import java.util.Scanner;

public class fizzbuzz {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        DecimalFormat precision6 = new DecimalFormat("0.000000");
        
        int x = input.nextInt();
        int y = input.nextInt();
        int n = input.nextInt();
        
        for (int i = 1; i < n + 1; i++) {
            if (i % x == 0 && i % y != 0) {
                System.out.print("Fizz\n");
            } else if (i % x != 0 && i % y == 0) {
                System.out.print("Buzz\n");
            } else if (i % x == 0 && i % y == 0) {
                System.out.print("FizzBuzz\n");
            } else {
                System.out.print(i + "\n");
            }
        }
    }
    
    static int pow(double n, double p) {
        return (int)Math.pow(n, p);
    }
}