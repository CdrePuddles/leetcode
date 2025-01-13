func removeDuplicates(nums []int) int {
    lastUnique := 0
    for i := 1; i < len(nums); i++ {

        if nums[i-1] != nums[i] {
            nums[lastUnique+1] = nums[i]
            lastUnique++
        }
    }

    return lastUnique+1
}