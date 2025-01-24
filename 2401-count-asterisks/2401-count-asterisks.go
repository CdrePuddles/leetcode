func countAsterisks(s string) int {
    count:=0
    ret:=0

    for i:= 0; i < len(s); i++ {
        if s[i] == '|' {
            count++
        }
        if count % 2 == 0 {
            if s[i] == '*' {
                ret++
            }
        }
    }   
    return ret
}