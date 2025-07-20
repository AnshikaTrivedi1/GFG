#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n = arr.size();
        int start = 0;
        int currentSum = 0;
        
        for (int end = 0; end < n; end++) {
            currentSum += arr[end];
            
            while (currentSum > target && start < end) {
                currentSum -= arr[start];
                start++;
            }
            
            if (currentSum == target && start <= end) {
                return {start + 1, end + 1};
            }
            
            if (currentSum > target) {
                currentSum -= arr[start];
                start++;
            }
        }
        
        return {-1};
    }
};