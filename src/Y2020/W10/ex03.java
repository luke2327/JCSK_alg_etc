package Y2020.W10;

public class ex03 {
    public static void main(String[] args) {
        int arr[] = { 1, 22, 5, 43, 19, 57, 75, 8, 27, 13 };

        sort(arr, 0, arr.length - 1);
    }

    private static void sort(int[] arr, int left, int right) {
        int pivot;

        if (left < right) {
            pivot = partition(arr, left, right);

            sort(arr, left, pivot - 1);
            sort(arr, pivot, right);
        }
    }

    private static int partition(int[] arr, int left, int right) {
        int pivot = arr[(left + right) / 2];
        int tmp;

        while (left <= right) {
            while (arr[left] < pivot)
                left++;
            while (arr[right] > pivot)
                right--;
            
            if (left <= right) {
                tmp = arr[left];
                arr[left] = arr[right];
                arr[right] = tmp;
                
                left++;
                right--;
            }
        }

        return left;
    }
}
