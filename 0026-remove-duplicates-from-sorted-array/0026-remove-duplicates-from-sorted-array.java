import java.util.Arrays;
import java.util.List;

class Solution {
    public int removeDuplicates(int[] nums) {
        Set<Integer> intSet = new LinkedHashSet<>();
        int i = 0;
        for (int num : nums) {
            //System.out.println(num);

            intSet.add(num);
        }
        int k = intSet.size();

        for (int loopInt : intSet) {
            nums[i] = loopInt;
            System.out.println(i);
            i++;
        }
        //System.out.println(nums);
        return k;
    }
}