func maxArea(height []int) int {
    ret := 0
    size := len(height)
    r := size-1

    for l := 0; l < size; l++ {

        for ; l < r && height[l] >= height[r]; {
            ret = max(ret, min(height[l], height[r]) * (r-l))
            r--
        }
        
        ret = max(ret, min(height[l], height[r]) * (r-l))

    }

    return ret

}