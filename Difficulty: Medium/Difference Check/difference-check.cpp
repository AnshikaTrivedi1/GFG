class Solution {
public:
    int minDifference(vector<string>& timePoints) {
        vector<int> seconds;
        
        for(string time : timePoints) {
            int h = stoi(time.substr(0, 2));
            int m = stoi(time.substr(3, 2));
            int s = stoi(time.substr(6, 2));
            seconds.push_back(h * 3600 + m * 60 + s);
        }
        
        sort(seconds.begin(), seconds.end());
        
        int minDiff = INT_MAX;
        
        for(int i = 1; i < seconds.size(); i++) {
            minDiff = min(minDiff, seconds[i] - seconds[i-1]);
        }
        
        minDiff = min(minDiff, 86400 - (seconds.back() - seconds[0]));
        
        return minDiff;
    }
};