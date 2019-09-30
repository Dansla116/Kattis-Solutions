import java.util.Scanner;
import java.text.DecimalFormat;
import java.lang.Math;
import java.lang.Integer;

public class pot {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        int n = Integer.parseInt(input.nextLine());
        String[] p = new String[n];
        int[] number = new int[n];
        int[] power = new int[n];
        int x = 0;
        
        for (int i = 0; i < n; i++) {
            p[i] = input.nextLine();
            number[i] = Integer.parseInt(p[i].substring(0, p[i].length())) / 10;
            power[i] = Integer.parseInt(p[i].substring(p[i].length() - 1, p[i].length()));
        }
        
        for (int i = 0; i < n; i++) {
            x += java.lang.Math.pow(number[i], power[i]);
        }
        
        System.out.print(x);
    }
}