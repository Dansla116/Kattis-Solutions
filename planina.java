import java.util.Scanner;
import java.text.DecimalFormat;
import java.lang.Math;
import java.lang.Integer;

public class planina {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        int n = input.nextInt();
        int a = 4;
        
        for (int i = 1; i < n + 1; i++) {
            a = pow(a, 0.5) + pow(2, i - 1);
            
            a = pow(a, 2);
        }
        
        System.out.print(a + "\n");
    }
    
    static int pow(double n, double p) {
        return (int)Math.pow(n, p);
    }
}
