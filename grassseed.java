import java.lang.Math;
import java.lang.Integer;
import java.text.DecimalFormat;
import java.util.Arrays;
import java.util.Scanner;

public class grassseed {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        DecimalFormat precision6 = new DecimalFormat("0.000000");
        
        double c = input.nextDouble();
        int l = input.nextInt();
        
        double[] w = new double[l];
        double[] l2 = new double[l];
        
        for (int i = 0; i < l; i++) {
            w[i] = input.nextDouble();
            l2[i] = input.nextDouble();
        }
        
        double ans = 0;
        for (int i = 0; i < l; i++) {
            ans = ans + c * w[i] * l2[i];
        }
        
        System.out.print(precision6.format(ans));
    }
    
    static int pow(double n, double p) {
        return (int)Math.pow(n, p);
    }
}