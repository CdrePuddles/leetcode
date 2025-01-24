func fib(n int) int {

    if n == 0  {
        return 0
    } else if n == 1 || n == 2 {
        return 1
    }

     dict := make(map[int]int)
    dict[0] = 0
    dict[1] = 1

    for i := 2; i <= n; i++ {
        dict[i] = dict[i-1] + dict[i-2]
    }

    return dict[n] 
}