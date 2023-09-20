public class BinarySearch {
    
    public static int binary_search(int[] array, int target) {
        int start = 0;
        int end = array.length - 1;

        while (start <= end) {
            int midpoint = Math.floorDiv((start + end), 2);

            if (array[midpoint] == target) {
                return midpoint;
            } else if (array[midpoint] > target) {
                end = midpoint - 1;
            } else {
                start = midpoint + 1;
            }
        }

        return -1;
    }
    public static void main(String args[]) {
        // indices;   0  1  2  3  4  5  6   7   8
        int[] nums = {1, 3, 4, 6, 7, 8, 9, 10, 15};

        System.out.println(binary_search(nums, 1));
        System.out.println(binary_search(nums, 15));
        System.out.println(binary_search(nums, 4));
        System.out.println(binary_search(nums, 6));
        System.out.println(binary_search(nums, 9));

    }
}
