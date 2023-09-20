fun binary_search(array: Array<Int>, target: Int): Int {
    var start = 0
    var end = array.size - 1

    while (start <= end) {
        var midpoint = Math.floorDiv((start + end ), 2)

        if (array[midpoint] == target) {
            return midpoint
        } else if (array[midpoint] > target) {
            end = midpoint - 1
        } else {
            start = midpoint + 1
        }
    }

    return -1
}

fun main() {
    // indices:        0  1  2  3   4   5   6    7    8
    val nums = arrayOf(1, 2, 3, 5, 10, 31, 55, 100, 101)

    println(binary_search(nums, 1))
    println(binary_search(nums, 101))
    println(binary_search(nums, 5))
    println(binary_search(nums, 31))
}
