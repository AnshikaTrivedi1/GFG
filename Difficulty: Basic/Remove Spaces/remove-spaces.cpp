

class Solution {
public:
    string modify(string& s) {
        string result = "";
        for (char c : s) {
            if (c != ' ') {
                result += c;
            }
        }
        return result;
    }
};