func romanToInt(s string) int {
    number := 0

    numerals := map[rune]int {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000,
    }

    for i := 0; i < len(s); i++ {
        if i > 0 && numerals[[]rune(s)[i-1]] < numerals[[]rune(s)[i]] {
            number = number - numerals[[]rune(s)[i-1]]*2 + numerals[[]rune(s)[i]]
        } else {
            number += numerals[[]rune(s)[i]]
        }
    }

    return number
}