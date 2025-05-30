// Function to find square root
// x: element to find square root
class Solution {
public:
    int floorSqrt(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        
        int left = 1, right = n;
        int result = 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (mid == n / mid) {
                return mid;
            }
            
            if (mid < n / mid) {
                result = mid;
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        return result;
    }
};