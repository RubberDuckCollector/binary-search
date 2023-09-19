#include <stdio.h>
#include <iostream>
#include <cmath>

int binary_search(int* arr, int target)
{
    int start = 0;
    // apparently the number of sizeof() here is the same as the last index
    int end = sizeof(arr);

    while (start <= end)
    {
        int midpoint = floor((start + end) / 2);

        if (arr[midpoint] == target)
        {
            return midpoint;
        } else if (arr[midpoint] > target)
        {
            end = midpoint - 1;
        } else
        {
            start = midpoint + 1;
        }
    }

    return -1;
}

int main()
{
    // indices:   0  1  2  3   4   5   6   7   8
    int nums[] = {1, 4, 5, 6, 10, 13, 21, 24, 30};
    std::cout << binary_search(nums, 5) << "\n";
    std::cout << binary_search(nums, 21) << "\n";
    std::cout << binary_search(nums, 30) << "\n";
    std::cout << binary_search(nums, 1) << "\n";

    std::cout << binary_search(nums, 10000) << "\n";
    return 0;
}