def recursive_binary_search(l, target, end, start=0):

    midpoint = (start + end) // 2

    if start <= end:
        if l[midpoint] == target:
            return midpoint
        else:
            if l[midpoint] > target:
                end = midpoint - 1
                return recursive_binary_search(l, target, end)
            elif l[midpoint] < target:
                start = midpoint + 1
                return recursive_binary_search(l, target, end, start)
    else:
        return -1
    
#       0  1  2   3   4    5    6     7     8     9
nums = [1, 3, 7, 10, 24, 110, 444, 1000, 1111, 5000]

end = len(nums) - 1
# print(f"{recursive_binary_search(nums, 3, end)}")
# print(f"{recursive_binary_search(nums, 3, end)}")
# print(f"{recursive_binary_search(nums, 3, end)}")
# print(f"{recursive_binary_search(nums, 3, end)}")
# print(f"{recursive_binary_search(nums, 3, end)}")

for i in range(len(nums)):
    print(f"{recursive_binary_search(nums, nums[i], end)}")

print(f"{recursive_binary_search(nums, 12, end)}")