
import "sort"
func maximumGap(nums []int) int {
    size := len(nums)
    val := 0
    maxVal :=0

    if size < 2 {
        return 0
    }

    sort.Ints(nums)

    for i:= 0; i < size-1; i++ {
        val = nums[i+1]-nums[i]

        if val > maxVal {
            maxVal = val
        } 
    }

    return maxVal
}