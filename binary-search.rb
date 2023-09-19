def binary_search(list, target)
    start = 0
    end_of_list = list.length - 1

    while start <= end_of_list
        midpoint = (start + end_of_list).div(2)
        if list[midpoint] == target
            return midpoint
        elsif list[midpoint] > target
            end_of_list = midpoint - 1
        else
            start = midpoint + 1
        end
    end
    return -1
end

def main
    #       0  1  2  3   4   5   6   7   8   9   10  11  12  13  14
    nums = [1, 2, 3, 38, 48, 51, 53, 61, 62, 65, 72, 73, 83, 83, 93]

    puts binary_search(nums, 1)
    puts binary_search(nums, 93)
    puts binary_search(nums, 38)
    puts binary_search(nums, 61)
    puts binary_search(nums, 72)
    
    puts binary_search(nums, 100) # not in list

    letters = ["a", "b", "c", "d", "e", "f"]
    puts binary_search(letters, "a")
    puts binary_search(letters, "f")
    puts binary_search(letters, "c")
    
    puts binary_search(letters, "z") # not in list
end


main()