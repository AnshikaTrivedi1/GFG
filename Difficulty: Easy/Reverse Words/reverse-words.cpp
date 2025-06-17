class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string &s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        
        while(ss >> word){
            words.push_back(word);
        }
        
        reverse(words.begin(), words.end());
        
        string reversed;
        for(size_t i=0; i<words.size(); i++){
            if(i > 0){
                reversed += " ";
            }
            reversed += words[i];
        }
        return reversed;
    }
};