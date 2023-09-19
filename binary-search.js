function binary_search(list, target)
{
    let start = 0
    let end = list.length - 1

    while (start <= end)
    {
        let midpoint = Math.floor((start + end) / 2)
        if (list[midpoint] == target)
        {
            return `the index of ${target} is: ${midpoint}`
        } else if (list[midpoint] > target)
        {
            end = midpoint - 1
        } else
        {
            start = midpoint + 1
        }
    }

    return -1
}

function main()
{
    // indices: 0  1  2  3   4   5   6   7   8   9   10  11  12  13  14
    let nums = [1, 2, 3, 38, 48, 51, 53, 61, 62, 65, 72, 73, 83, 83, 93]

    // this will loop through nums and run binary search on each element
    for (let i = 0; i < nums.length; i++)
    {
        console.log(binary_search(nums, nums[i]))
    }
    
    console.log(`100: (not in list) returns: ${binary_search(nums, 100)}`) // not in list

    let letters = ["a", "b", "c", "d", "e", "f"]
    console.log(binary_search(letters, "a"))
    console.log(binary_search(letters, "f"))
    console.log(binary_search(letters, "c"))

    console.log(`z: (not in list): ${binary_search(letters, "z")}`)
    
    // puts binary_search(letters, "z") // not in list
}

main()