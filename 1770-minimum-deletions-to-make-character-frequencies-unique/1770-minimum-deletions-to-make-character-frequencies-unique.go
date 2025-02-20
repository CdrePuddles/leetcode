
import "sort"

func minDeletions(s string) int {
    charMap := make(map[byte]int)
    usedFreq := make(map[int]bool)
    ret := 0

    
    for i := 0; i < len(s); i++ {
        charMap[s[i]]++
    }

    sortedFreqs := make([]int, 0, len(charMap))

    for _, freq := range charMap {
        sortedFreqs = append(sortedFreqs, freq)
    }
    sort.Sort(sort.Reverse(sort.IntSlice(sortedFreqs)))

    for _, freq := range sortedFreqs {
        for freq > 0 && usedFreq[freq] {
            freq--
            ret++
        }
        usedFreq[freq] = true
    }

    return ret
}