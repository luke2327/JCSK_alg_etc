public class Alg105_ex02{

    public static void main(String []args){
       int[] a = {10, 20, 30, 40, 50};
       
       int hap = 0;
       float avg;
       
       for (int i : a)
           hap = hap + i;
       
       avg = (float)hap / a.length;
       System.out.printf("%4d, %4.2f", hap, avg);
    }
}