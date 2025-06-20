// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        string snew="";
        for(int i=0;i<s.length();i++)
        {
            bool flag=false;
            for(int j=0;j<snew.length();j++)
            {
                if(s[i]==snew[j])
                {    flag=true;
                    break;
                }
            }
            if(!flag )
            {
                snew+=s[i];
                
            }
        }
        return snew;
    }
};