package Y2019.W10;

public class ex02 {
    public static void main(String[] args) {
        int a[][] = new int[5][5];
        initArray(a);
        assignVal(a);
        printArray(a);
    }

    static void initArray(int[][] a) {
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                a[i][j] = 0;
            }
        }
    }

    static void assignVal(int[][] a) {
        int n = 1;

        for (int i = 0; i < a.length; i++) {
            for (int j = i; j < a[i].length; j++) {
                a[i][j] = n++;
            }
        }
    }

    static void printArray(int[][] a) {
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                if (a[i][j] == 0)
                    System.out.print("   ");
                else
                    System.out.printf("%3d", a[i][j]);
            }

            System.out.println();
        }
    }
}
