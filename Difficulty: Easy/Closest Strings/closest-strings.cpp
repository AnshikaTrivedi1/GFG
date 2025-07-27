// User function template for C++
class Solution {
  public:
    int shortestDistance(vector<string> &s, string word1, string word2) {
        int n = s.size();
        int minDist = INT_MAX;
        int pos1 = -1, pos2 = -1;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == word1) {
                pos1 = i;
                if (pos2 != -1) {
                    minDist = min(minDist, abs(pos1 - pos2));
                }
            }
            if (s[i] == word2) {
                pos2 = i;
                if (pos1 != -1) {
                    minDist = min(minDist, abs(pos1 - pos2));
                }
            }
        }
        
        return minDist;
    }
};