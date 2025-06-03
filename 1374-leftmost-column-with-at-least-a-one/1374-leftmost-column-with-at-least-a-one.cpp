/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        int height = binaryMatrix.dimensions()[0];
        int width = binaryMatrix.dimensions()[1];
        int ret = INT_MAX;

        for (int i = 0; i < height; i++) {
            int lo = 0;
            int hi = width-1;
            int mid = (lo + hi) / 2;
            while (lo < hi) {
                if (binaryMatrix.get(i, mid)) {
                    hi = mid;
                } else {
                    lo = mid+1;
                }

                mid = (lo + hi) / 2;

            }
            if (binaryMatrix.get(i, mid)) {
                ret = min(ret, mid);
            }
        }

        if (ret != INT_MAX) {
            return ret;
        } else {
            return -1;
        }
    }
};