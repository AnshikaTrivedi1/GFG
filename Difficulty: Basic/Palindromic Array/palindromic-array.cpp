class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        for(int i = 0; i < arr.size(); i++) {
            int val = arr[i];
            int rev = 0;
            int temp = val;
            
            while(temp != 0) {
                int digit = temp % 10;
                rev = (rev * 10) + digit;
                temp = temp / 10;
            }
            
            if(val != rev) {
                return false;
            }
        }
        
        return true;
    }
};