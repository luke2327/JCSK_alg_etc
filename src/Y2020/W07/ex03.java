package Y2020.W07;

public class ex03 {
    public static void main(String[] args) {
        int exint[] = { 2, 4, 2, 67, 6, 5, 7, 2, 5, 4, 6 };
        int value = 0;

        for (int i = 0; i < exint.length; i++) {
            if (exint[i] == 2) {
                value++;
            }
        }

        System.out.println(value);
    }
}
