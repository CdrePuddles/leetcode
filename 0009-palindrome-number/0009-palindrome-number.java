class Solution {
    public boolean isPalindrome(int x) {
        int number = x;
        int newNumber = 0;

        if (number <0) {
            return false;
        }

        while (number != 0){
            newNumber = newNumber * 10 + (number % 10);
            number = number/10;
        }

        return x == newNumber;
    }
}