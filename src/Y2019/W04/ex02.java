package Y2019.W04;

import java.util.Scanner;

public class ex02 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n, i, sum = 0;

        n = scan.nextInt();

        scan.close();

        for (i = 1; i <= n; i++)
            sum += i;
        
        System.out.printf("%d", sum);

        
    }
}
