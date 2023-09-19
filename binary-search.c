#include <stdio.h>
#include <math.h>

int binary_search(int arr[], int target, int end_of_array)
{
    int start = 0;

    while (start <= end_of_array)
    {
        int midpoint = floor((start + end_of_array) / 2);

        if (arr[midpoint] == target)
        {
            return midpoint;
        } else if (arr[midpoint] > target)
        {
            end_of_array = midpoint - 1;
        } else
        {
            start = midpoint + 1;
        }
    }

    return -1;
}

int main(void)
{
    // indices:   0  1  2   3    4     5     6     7
    int nums[] = {1, 4, 5, 10, 103, 3421, 5555, 7024};

    // end is the number of the last index (7)
    int end = (sizeof(nums) / sizeof(nums[0])) - 1;

    printf("%d\n", binary_search(nums, 10, end));
    printf("%d\n", binary_search(nums, 7024, end));
    printf("%d\n", binary_search(nums, 4, end));
    printf("%d\n", binary_search(nums, 5, end));

    printf("%d\n", binary_search(nums, 10000, end));

    return 0;
}