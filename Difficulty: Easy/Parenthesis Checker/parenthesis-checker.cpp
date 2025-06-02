#include <stack>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isBalanced(string s) {
        stack<char> st;
        unordered_map<char, char> map = {{')', '('}, {'}', '{'}, {']', '['}};
        
        for (char c : s) {
            if (map.find(c) != map.end()) {
                if (st.empty() || st.top() != map[c]) {
                    return false;
                }
                st.pop();
            } else {
                st.push(c);
            }
        }
        
        return st.empty();
    }
};