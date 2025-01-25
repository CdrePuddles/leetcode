func moveZeroes(nums []int)  {
    size := len(nums)
    cursor := 0

    for i := 0; i < size; i++ {
        if nums[i] != 0 {
            nums[i], nums[cursor] = nums[cursor], nums[i]
            cursor++
        }
    }
}