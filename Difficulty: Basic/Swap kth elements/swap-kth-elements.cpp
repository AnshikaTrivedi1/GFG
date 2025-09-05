
class Solution {
  public:
    void swapKth(vector<int> &arr, int k) {
        // code here
        int temp=0;
        int n=arr.size();
        temp=arr[k-1];
        arr[k-1]=arr[n-k];
        arr[n-k]=temp;
        
    }
};
