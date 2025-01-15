func searchRange(nums []int, target int) []int {
 lo := 0
 hi := len(nums) - 1

 if hi == 0 && nums[hi] == target {
    return []int {0,0}
 }

 for lo <= hi {
    var mid int = (lo + hi) / 2

    if nums[mid] == target {
        lo = mid
        hi = mid

        for lo >= 0 && nums[lo] == target {
            lo--
        }
        lo++

        for hi < len(nums) && nums[hi] == target {
            hi++
        }
        hi--

        return []int {lo, hi}

    } else if nums[mid] < target{
        lo = mid + 1
    } else {
        hi = mid - 1

    }
 }  
    return []int {-1, -1}
}