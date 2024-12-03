class Solution {
public:

    int maxArea(vector<int>& height) {
        int count = 0;
        int maxVolume = 0;
        //int distance = height.size();
        int rightMovement = height.size()-1;
        int leftMovement = 0;


        int left = height[0];
        int right = height[height.size()-1];

        for (int i = 0; i < height.size(); i++) {
            left = height[i];
             leftMovement = i;

            maxVolume = max(maxVolume, min(left, right) * (rightMovement - leftMovement));

            if (right < left) {
                for (int j = rightMovement; j > i; j--) {
                rightMovement = j;
                right = height[j];
                
                maxVolume = max(maxVolume, min(left, right) * (rightMovement - leftMovement));

                    if (left < right) {
                        break;
                    }
                }
            }

            if (leftMovement == rightMovement) {
                break;
            }
        }



        /*
        for (int i = 0; i < height.size()-1; i++) {
            for (int j = i+1; j < height.size(); j++) {
                distance = j - i;
                maxVolume = max(maxVolume, min(height[i], height[j]) * distance);
            }
        }
        */
        return maxVolume;
    }
};