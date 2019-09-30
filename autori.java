import java.lang.Math;
import java.lang.Integer;
import java.text.DecimalFormat;
import java.util.Arrays;
import java.util.Scanner;

public class zamka {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        DecimalFormat precision6 = new DecimalFormat("0.000000");
        
        int l = input.nextInt();
        int d = input.nextInt();
        int x = input.nextInt();
        
        int n = 0;
        int m = 0;
        
        for (int i = l; i <= d; i++) {
            String sample = Integer.toString(i);
            
            int sum = 0;
            for (int j = 0; j < sample.length(); j++) {
                sum += Integer.parseInt(sample.substring(j, j + 1));
            }
            
            if (sum == x) {
                if (n == 0)
                    n = i;
                m = i;
            }
        }
        
        System.out.print(n + "\n");
        System.out.print(m + "\n");
    }
    
    // Utility functions
    static int pow(double n, double p) {
        return (int)Math.pow(n, p);
    }
}