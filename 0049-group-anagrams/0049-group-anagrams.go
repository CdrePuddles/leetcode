import (
    "sort"
    "strings"
)

func groupAnagrams(strs []string) [][]string {
    dict := make(map[string][]string)
    var ret [][]string
    var wrd string
    var wrd2 string
    var wrd3 []string


    for _, word := range strs {
        wrd = word
        wrd3 = strings.Split(word, "")
        sort.Strings(wrd3)
        wrd2 = strings.Join(wrd3, "")
        _, ok := dict[wrd2]

        if !ok {
            var arr []string
            dict[wrd2] = arr
        } 

        dict[wrd2] = append(dict[wrd2], wrd)
    }

    for _, v := range dict {
        ret = append(ret, v)
    }

    return ret
}