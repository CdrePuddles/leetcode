class Solution {
    public int romanToInt(String s) {
        int number = 0;
        
        Map<Character, Integer> numerals = new HashMap<>();
        numerals.put('I', 1);
        numerals.put('V', 5);
        numerals.put('X', 10);
        numerals.put('L', 50);
        numerals.put('C', 100);
        numerals.put('D', 500);
        numerals.put('M', 1000);

        for (int i = 0; i < s.length(); i++) {
            if(i>0 && numerals.get(s.charAt(i-1)) < numerals.get(s.charAt(i))) {
                number = number - numerals.get(s.charAt(i-1))*2 + numerals.get(s.charAt(i));
            } else {
                number += numerals.get(s.charAt(i));
            }
        }
        return number;
    }
}