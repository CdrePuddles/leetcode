import (
    "sort"
    "strings"
)

func groupAnagrams(strs []string) [][]string {
    dict := make(map[string][]string)
    var ret [][]string
    var wrd string

    for _, word := range strs {
        wrd = word
        word := strings.Split(word, "")
        sort.Strings(word)
        wr2 := strings.Join(word, "")
        _, ok := dict[wr2]

        if !ok {
            var arr []string
            dict[wr2] = arr
        } 

        dict[wr2] = append(dict[wr2], wrd)
    }

    for _, v := range dict {
        ret = append(ret, v)
    }

    return ret
}