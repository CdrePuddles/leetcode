func searchInsert(nums []int, target int) int {
    numsSize := len(nums)
    var mid int = 0
    lo := 0
    hi := numsSize -1
    val := 0

    for lo <= hi {
        mid = (hi+lo) / 2
        val = nums[mid]
        if val == target {
            return mid
        } else if target > val {
            lo = mid + 1
        } else {
            hi = mid -1
        }

    }   

    return lo

}