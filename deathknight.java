import java.lang.Math;
import java.lang.Integer;
import java.text.DecimalFormat;
import java.util.Arrays;
import java.util.Scanner;

public class deathknight {
    public static final double g = (double)9.81;
        
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        DecimalFormat precision1 = new DecimalFormat("##0.0");
        DecimalFormat precision3 = new DecimalFormat("##0.000");
        DecimalFormat precision6 = new DecimalFormat("##0.000000");
        
        int n  = input.nextInt();
        String[] k = new String[n + 1];
        
        int ans = n;
        
        for (int i = 0; i <= n; i++) {
            k[i] = input.nextLine();
            
            for (int j = 0; j < k[i].length() - 1; j++) {
                if (k[i].substring(j, j + 2).equals("CD")) {
                    ans--;
                }
            }
        }
        
        System.out.print(ans);
        
    }
    // Utility functions
    static int pow(double n, double p) {
        return (int)Math.pow(n, p);
    }
    
    static double sinD(double deg) {
        return Math.sin(Math.toRadians(deg));
    }
    
    static double cosD(double deg) {
        return Math.cos(Math.toRadians(deg));
    }
}