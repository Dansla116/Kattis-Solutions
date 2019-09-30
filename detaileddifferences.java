import java.lang.Math;
import java.lang.Integer;
import java.text.DecimalFormat;
import java.util.Arrays;
import java.util.Scanner;

public class detaileddifferences {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        DecimalFormat precision6 = new DecimalFormat("0.000000");
        
        int n = input.nextInt();
        input.nextLine();
        String[] a = new String[n];
        String[] b = new String[n];
        for (int i = 0; i < n; i++) {
            a[i] = input.nextLine();
            b[i] = input.nextLine();
        }
        
        for (int i = 0; i < n; i++) {
            System.out.print(a[i] + "\n");
            System.out.print(b[i] + "\n");
            for (int aL = 0; aL < a[i].length(); aL++) {
                if (a[i].substring(aL, aL + 1).equals(b[i].substring(aL, aL + 1))) {
                    System.out.print(".");
                } else {
                    System.out.print("*");
                }
            }
            System.out.print("\n\n");
        }
    }
    
    static int pow(double n, double p) {
        return (int)Math.pow(n, p);
    }
}