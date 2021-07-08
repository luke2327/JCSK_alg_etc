package Y2018.W06;

import java.lang.Math;

public class ex2 {
    public static void main(String []args) {
        int p = 2;
        int n = 3;

        while (true) {
            double t = Math.sqrt(n);
            int m = (int)t;

            System.out.println();
            System.out.printf("m = %d", m);
            System.out.println();

            for (int i = 2; i <= m; i++) {
                int r = n % i;

                System.out.printf("%d %% %d = %d\n", n, i, n % i);

                if (r == 0) {
                    break;
                }
                
                if (i == m ) {
                    p = n;
                }
            }

            n++;

            if (n > 100) {
                break;
            }
        }

        System.out.printf("\n1 ~ 100 까지의 범위 중 가장 큰 소수 = %d\n", p);
    }
}