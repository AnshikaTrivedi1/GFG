// User function Template for C++

class Solution {
  public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(int n) {
        // code here
        if (n <= 0) return false;
    return (n & (n - 1)) == 0;
    }
};