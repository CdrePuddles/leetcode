
import "math"
func sortedSquares(nums []int) []int {
    var ret []int
    l := 0
    r := len(nums)-1
    cur := 0
    var val []int

    for i:= 0; i < len(nums); i++ {
        if max(nums[l], -nums[l]) >= max(nums[r], -nums[r]) {
            cur = l
            l++
        } else {
            cur = r
            r--
        }
        val = []int{int(math.Pow(float64(nums[cur]), float64(2)))}
        ret = append(val, ret...)
    }

    return ret
}