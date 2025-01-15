func findMissingRanges(nums []int, lower int, upper int) [][]int {
    size := len(nums)
    var ret [][]int
    if size < 1 {
        return [][]int{{lower,upper}}
    } 

    if nums[0] > lower {
        ret = append(ret, []int{lower, nums[0]-1})
    }

    for i := 0; i < size-1; i++ {
        if nums[i+1] - nums[i] > 1 {
            ret = append(ret, []int{nums[i]+1, nums[i+1]-1})
        }
    }
    if nums[size-1] < upper {
        ret = append(ret, []int{nums[size-1]+1, upper})
    }

    return ret
}