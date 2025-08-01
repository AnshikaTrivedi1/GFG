class Solution {
public:
    bool areIsomorphic(string &s1, string &s2) {
         int count[26] = {0};
         int count1[26] = {0};
         int count2[26] = {0};
         int count3[26] = {0};
         int i = 0;
          while(i<s1.length()){
              int a = s1[i]-'a';
              int b = s2[i]-'a';
              count1[a]++;
              i++;
              if(count1[a] > 1 && count[a] != b){
                   return false;
              }
              if(count1[a] > 1 && count[a] == b){
                  continue;
              }
              count[a] = b;
          }
          for(int i = 0;i<s1.length();i++){
              count3[s1[i]-'a']++;
              if(count3[s1[i]-'a'] > 1){
                  continue;
              }
              count2[count[s1[i]-'a']]++;
              if(count2[count[s1[i]-'a']] == 2){
                  return false;
              }
          }
       return true;
    }
};

