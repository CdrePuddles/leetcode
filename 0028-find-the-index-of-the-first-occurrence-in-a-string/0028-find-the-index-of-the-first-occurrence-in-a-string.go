func strStr(haystack string, needle string) int {
    needleSize := len(needle)
    haystackSize := len(haystack)

    for i := 0; i <= haystackSize - needleSize; i++ {
        if haystack[i:i+needleSize] == needle {
            return i
        }
    }

    return -1
}