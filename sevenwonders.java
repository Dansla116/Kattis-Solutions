import java.lang.Math;
import java.lang.Integer;
import java.text.DecimalFormat;
import java.util.Arrays;
import java.util.Scanner;

public class sevenwonders {
    public static final double g = (double)9.81;
        
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        DecimalFormat precision1 = new DecimalFormat("##0.0");
        DecimalFormat precision3 = new DecimalFormat("##0.000");
        DecimalFormat precision6 = new DecimalFormat("##0.000000");
        
        String cards  = input.nextLine();
        int C = 0;
        int G = 0;
        int T = 0;
        int sets = 0;
        
        for (int i = 0; i < cards.length(); i++) {
            if (cards.substring(i, i + 1).equals("C")) {
                C++;
            } else if (cards.substring(i, i + 1).equals("G")) {
                G++;
            } else if (cards.substring(i, i + 1).equals("T")) {
                T++;
            }
        }
        System.out.print(pow(C, 2) + pow(G, 2) + pow(T, 2) + Math.min(C, Math.min(G, T)) * 7);
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