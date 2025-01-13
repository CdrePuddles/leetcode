
func twoSum(nums []int, target int) []int {
    
    dict := make(map[int]int)

    for i := 0; i < len(nums); i++ {
        dict[nums[i]] = i
    }
    
    for i := 0; i < len(nums); i++ {
        sum := target - nums[i]
        _, ok := dict[sum]
        
        if (ok && dict[sum] != i) {
            return []int{dict[sum], i}
        }
    }

    return []int{}
}