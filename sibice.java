import java.util.Scanner;
import java.text.DecimalFormat;
import java.lang.Math;
import java.lang.Integer;

public class sibice {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        int n = input.nextInt();
        int w = input.nextInt();
        int h = input.nextInt();
        int[] n2 = new int[n]; 
        String[] result = new String[n];
        
        
        for (int i = 0; i < n; i++) {
            n2[i] = input.nextInt();
            if (n2[i] > java.lang.Math.pow(java.lang.Math.pow(w, 2) + java.lang.Math.pow(h, 2), .5)) {
                result[i] = "NE";
            } else {
                result[i] = "DA";
            }
        }
        
        for (int i = 0; i < n; i++) {
            System.out.print(result[i] + "\n");
        }
        
    }
}