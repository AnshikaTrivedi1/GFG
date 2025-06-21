class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
          int n=arr.size();
        vector<int>ans;
        map<int,int>m;
        
        for(int i=0; i<n; i++){
            m[arr[i]]++;
        }
        
       for(int i=1; i<=n; i++){
           
           if(m.find(i) != m.end()){
               
                ans.push_back(m[i]);
           }
          
          else ans.push_back(0);    
           
       }
       return ans;
        
    }
};
