import java.util.Scanner;
public class Mirror {
    public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    int length = sc.nextInt();
    for (int i = 0; i < length; i++)
    {
        System.out.println("Test " + (i + 1));
        int r = sc.nextInt();
        int c = sc.nextInt();
        String[][] x = new String[r][c];
        for (int j = 0; j < r; j++)
        {
            String y = sc.next();
            for (int a = 0; a < c; a++)
                x[j][a] = y.charAt(a) + "";
        }
        for (int q = r - 1; q >= 0; q--)
        {
            for (int w = c - 1; w >= 0; w--)
            {
                System.out.print(x[q][w]);
            }
            System.out.println();
        }
    }
    sc.close();
  }
}