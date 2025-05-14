//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution {
  public:
    int longest(vector<int>& arr) {
        int count = 0;
        int max_height = 0;

        for (int height : arr) {
            if (height >= max_height) {
                count++;
                max_height = height;
            }
        }

        return count;
    }
};




//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.longest(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends