// User function Template for C++
class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        int n = arr.size();
        if (n == 0) return 0;
        
        int maxProd = arr[0];
        int minProd = arr[0];
        int result = arr[0];
        
        for (int i = 1; i < n; i++) {
            if (arr[i] < 0) {
                swap(maxProd, minProd);
            }
            
            maxProd = max(arr[i], maxProd * arr[i]);
            minProd = min(arr[i], minProd * arr[i]);
            
            result = max(result, maxProd);
        }
        
        return result;
    }
};
