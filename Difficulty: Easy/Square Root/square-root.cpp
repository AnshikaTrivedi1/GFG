class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        
       if(floor(sqrt(n))!=ceil(sqrt(n))){
           return floor(sqrt(n));
       }
       else{
           return sqrt(n);
       }
        
    }
};
 