class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        unordered_set<int> s;
        for(int x : arr) {
            s.insert(x * x);
        }
        
        for(int i = 0; i < arr.size(); i++) {
            for(int j = i + 1; j < arr.size(); j++) {
                int sum = arr[i] * arr[i] + arr[j] * arr[j];
                if(s.find(sum) != s.end()) {
                    return true;
                }
            }
        }
        return false;
    }
};