func isPalindrome(x int) bool {
    number := x
    newNumber := 0

    if number < 0 {
        return false
    }

    for number != 0 {
        newNumber = newNumber * 10 + (number % 10)
        number = number/10
    }

    return x == newNumber
}