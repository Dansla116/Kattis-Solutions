import java.lang.Math;
import java.lang.Integer;
import java.text.DecimalFormat;
import java.util.Arrays;
import java.util.Scanner;

public class filip {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        DecimalFormat precision6 = new DecimalFormat("0.000000");
        
        String a = Integer.toString(input.nextInt());
        String b = Integer.toString(input.nextInt());
        
        String resA = "";
        for (int i = a.length() - 1; i >= 0; i--) {
            resA = resA + a.substring(i, i + 1);
        }
        
        String resB = "";
        for (int i = b.length() - 1; i >= 0; i--) {
            resB = resB + b.substring(i, i + 1);
        }
        
        if (Integer.parseInt(resA) > Integer.parseInt(resB)) {
            System.out.print(resA);
        } else {
            System.out.print(resB);
        }
    }
    
    static int pow(double n, double p) {
        return (int)Math.pow(n, p);
    }
}