class Solution {
    public String longestCommonPrefix(String[] strs) {
        String prefix = "";
        int min = strs[0].length();
        for (int i = 1; i < strs.length; i++) {
            int tmp = strs[i].length();
            if (tmp < min) {
                min = tmp;
            }
        }
        for (int i = 0; i < min; i++) {
            for (int j = 1; j < strs.length; j++) {
                if (!strs[0].substring(0,i+1).equals(strs[j].substring(0,i+1))) {
                    return prefix;
                }
            }
            
        prefix = strs[0].substring(0,i+1);
        }
        return prefix;
    }
}