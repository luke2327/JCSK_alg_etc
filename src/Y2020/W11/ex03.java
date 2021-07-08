package Y2020.W11;

public class ex03 {
    public static void main(String[] args) {
        int x = 1;

        System.out.println(!(x > 0));                                // false
        System.out.println(x > 0 || x < 4);                          // true
        System.out.println(x << 2);                                  // 4
        System.out.println(Integer.toBinaryString(~x));              //   not
        System.out.println(x & 2);                                   // 0 and
        System.out.println(x | 2);                                   // 3 or
        System.out.println(x ^ 1);                                   // 0 xor
        System.out.println(x % 3);                                   // 1
    }
}
