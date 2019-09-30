import java.util.Scanner;
import java.text.DecimalFormat;
import java.lang.Math;
import java.lang.Integer;

public class nastyhacks {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        int n = input.nextInt();
        int[] r = new int[n];
        int[] e = new int[n];
        int[] c = new int[n];
        String[] result = new String[n];
        
        for (int i = 0; i < n; i++) {
            r[i] = input.nextInt();
            e[i] = input.nextInt();
            c[i] = input.nextInt();
            if (r[i] < e[i] - c[i]) {
                result[i] = "advertise";
            } else if (r[i] > e[i] - c[i]) {
                result[i] = "do not advertise";
            } else {
                result[i] = "does not matter";
            }
        }
        
        for (int i = 0; i < n; i++) {
            System.out.print(result[i] + "\n");
        }
    }
}