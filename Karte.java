import java.util.Scanner;
import java.text.DecimalFormat;
import java.lang.Math;
import java.lang.Integer;

public class Karte {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        
        boolean[] p = new boolean[14];
        boolean[] k = new boolean[14];
        boolean[] h = new boolean[14];
        boolean[] t = new boolean[14];
        for (int i = 0; i < 14; i++) {
            p[i] = false;
            k[i] = false;
            h[i] = false;
            t[i] = false;
        }
        boolean error = false;
        int pTot = 13;
        int kTot = 13;
        int hTot = 13;
        int tTot = 13;
        
        String s = input.nextLine();
        
        do {
            String c = s.substring(0, 3);
            String cSuit = c.substring(0, 1);
            int cNumb = Integer.parseInt(c.substring(1, 3));
            
            if (cSuit.equals("P")) {
                if (!p[cNumb]) {
                    p[cNumb] = true;
                } else {
                    error = true;
                    break;
                }
            } else if (cSuit.equals("K")) {
                if (!k[cNumb]) {
                    k[cNumb] = true;
                } else {
                    error = true;
                    break;
                }
            } else if (cSuit.equals("H")) {
                if (!h[cNumb]) {
                    h[cNumb] = true;
                } else {
                    error = true;
                    break;
                }
            } else if (cSuit.equals("T")) {
                if (!t[cNumb]) {
                    t[cNumb] = true;
                } else {
                    error = true;
                    break;
                }
            }
            
            s = s.substring(3, s.length());
        } while (s.length() > 0);
        
        for (int i = 0; i < 14; i++) {
            if (p[i]) {
                pTot--;
            }
            if (k[i]) {
                kTot--;
            }
            if (h[i]) {
                hTot--;
            }
            if (t[i]) {
                tTot--;
            }
        }
        
        if (!error) {
            System.out.print(pTot + " " + kTot + " " + hTot + " " + tTot);
        } else {
            System.out.print("GRESKA");
        }
        
    }
}