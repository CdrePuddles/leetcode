func removeElement(nums []int, val int) int {
    
    j := 0
    for i := 0; i < len(nums); i++ {
        if nums[i] != val {
            nums[j], nums[i] = nums[i], nums[j]
            j++
        }
    }

    return j
}