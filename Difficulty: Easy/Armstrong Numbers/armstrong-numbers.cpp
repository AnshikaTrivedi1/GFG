// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int rem,sum,temp;
        temp=n;
        sum=0;
        while(n>0)
        {
            rem=n%10;
            sum=sum+(rem*rem*rem);
            n/=10;
            
        }
        if(sum==temp)
        {
            return true;
        }
        else 
            return false;
    }
};