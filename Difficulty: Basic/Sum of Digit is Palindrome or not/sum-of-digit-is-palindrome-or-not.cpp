// User function Template for C++

class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        // code here
        int sum=0,num,rev=0;
        while(n)
        {
            sum=sum+(n%10);
            n=n/10;
            
        }
        num=sum;
        while(num)
        {
            rev=(rev*10)+(num%10);
            num=num/10;
        }
        if(sum==rev) 
            return true;
        else 
            return false;
    }
};