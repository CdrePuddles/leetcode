func trap(height []int) int {
    ret := 0
    idx := 0
    val := 0

    size := len(height) -1

    h1 := height[0]

    for i:= 0; i < len(height); i++ {
        if height[i] > val {
            val = height[i]
            idx = i
        }
    }

    for i := 0; i < idx; i++ {
        if height[i] < h1 {
            ret += h1 - height[i]
        } else if height[i] > h1 {
            h1 = height[i]
        }
    }
    h1 = height[size]

    for i := size; i > idx; i-- {
        if height[i] < h1 {
            ret += h1 - height[i]
        } else if height[i] > h1 {
            h1 = height[i]
        }
    }



    return ret

}