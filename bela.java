import java.lang.Math;
import java.lang.Integer;
import java.text.DecimalFormat;
import java.util.Arrays;
import java.util.Scanner;

public class bela {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        DecimalFormat precision6 = new DecimalFormat("0.000000");
        
        
        int n = input.nextInt();
        String b = Character.toString(input.next().charAt(0));
        input.nextLine();
        
        String[] card = new String[4 * n];
        
        int answer = 0;
        for (int i = 0; i < 4 * n; i++) {
            card[i] = input.nextLine();
            if (card[i].substring(0, 1).equals("A")) {
                answer += 11;
            } else if (card[i].substring(0, 1).equals("K")) {
                answer += 4;
            } else if (card[i].substring(0, 1).equals("Q")) {
                answer += 3;
            } else if (card[i].substring(0, 1).equals("J")) {
                if (card[i].substring(1, 2).equals(b)) {
                    answer += 20;
                } else {
                    answer += 2;
                }
            } else if (card[i].substring(0, 1).equals("T")) {
                answer += 10;
            } else if (card[i].substring(0, 1).equals("9")) {
                if (card[i].substring(1, 2).equals(b)) {
                    answer += 14;
                } else {
                    answer += 0;
                }               
            } else {
                answer += 0;
            }
        }
        
        System.out.print(answer);
    }
    
    static int pow(double n, double p) {
        return (int)Math.pow(n, p);
    }
}
