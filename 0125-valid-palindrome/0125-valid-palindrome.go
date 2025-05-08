
func isPalindrome(s string) bool {
    size := len(s)
    j := size-1
    left := 0
    right := 0

    for i := 0; i < j; i++ {
        for ; i < j && !((s[i] >= 97 && s[i] <= 122) || (s[i] >= 65 && s[i] <= 90) || (s[i] >= 48 && s[i] <= 57)); i++ {
        }

        for ; j > i && !((s[j] >= 97 && s[j] <= 122) || (s[j] >= 65 && s[j] <= 90) || (s[j] >= 48 && s[j] <= 57)); j-- {

        }
        left = int(s[i])
        right = int(s[j])

        if left <= 90 {
            left+=32
        }
        if right <= 90 {
            right+=32
        }
            //fmt.Printf("i %d, j %d", i, j)


        if left != right {

            return false
        }
        j--
    }

    return true
   
}