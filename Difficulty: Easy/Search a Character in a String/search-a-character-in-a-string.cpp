// User function Template for C++
class Solution {
  public:
    int searchCharacter(string &s, char ch) {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ch) {
                return i;
            }
        }
        return -1;
    }
};

