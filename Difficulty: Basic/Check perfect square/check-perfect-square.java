// User function Template for Java
class Solution{
    static int checkPerfectSquare(int N){
        // code here
        double sq = Math.sqrt(N);
        if((sq - Math.floor(sq)) == 0)
            return 1;
        else
            return 0;
    }
}