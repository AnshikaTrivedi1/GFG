// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
         if (arr.empty()) 
            return "";
        
        int minLen = arr[0].length();
        for (int i = 1; i < arr.size(); i++) {
            minLen = min(minLen, (int)arr[i].length());
        }
        
        string result = "";
        
        for (int i = 0; i < minLen; i++) {
            char currentChar = arr[0][i];
            
            bool isCommon = true;
            for (int j = 1; j < arr.size(); j++) {
                if (arr[j][i] != currentChar) {
                    isCommon = false;
                    break;
                }
            }
            
            if (isCommon) {
                result += currentChar;
            } else {
                break;
            }
        }
        
        return result;
    }
        
};