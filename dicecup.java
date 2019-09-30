import java.util.Scanner;
import java.text.DecimalFormat;
import java.lang.Math;
import java.lang.Integer;

public class dicecup {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        int n = input.nextInt();
        int m = input.nextInt();
        int[] results = new int[n + m];
        
        for (int i = 1; i < n + 1; i++) {
            for (int j = 1; j < m + 1; j++) {
                int result = i + j;
                results[result - 1]++;
            }
        }
        
        int max = 0;
        for (int i = 0; i < n + m; i++) {
            if (results[i] > max) max = results[i];
        }
        
        for (int i = 0; i < n + m; i++) {
            if (results[i] == max) System.out.print(i + 1 + "\n");
        }
    }
}