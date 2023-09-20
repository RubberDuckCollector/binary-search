function binary_search(array, target)
    start = 0
    end_of_array = #(array) - 1
    
    while start <= end_of_array do
        midpoint = (start + end_of_array) // 2
        if midpoint == target then
            return midpoint
        elseif midpoint > target then
            end_of_array = midpoint -1
        else
            start = midpoint + 1
        end
    end

    return -1
end

a = {1, 2, 3, 4, 5}

binary_search(a)