

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        
        int n=arr.size();
        vector<int> leaders;
        int right=arr[n-1];
        leaders.push_back(right);
        for(int i=n-2;i>=0;i--) //traverse arrary from right to left 
        {
            if(arr[i]>=right)
            {
                right=arr[i];
                leaders.push_back(right);
                
            }
            
        }
        reverse(leaders.begin(),leaders.end());
        return leaders;
        
        
    }
};