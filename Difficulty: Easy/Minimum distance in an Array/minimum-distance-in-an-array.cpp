class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
        int i,flag1=-1,flag2=-1,dist=INT_MAX;
        for(i=0;i<arr.size();i++)
        {  
            
                if(arr[i]==x)
                {
                    flag1=i;
                }
            
            
                if(arr[i]==y)
                {
                     flag2=i;
                }
                if(abs(flag2-flag1) < dist && flag1 != -1 && flag2 != -1)
                {
                    dist=abs(flag2-flag1);
                }
            
        
        }
        
        if((flag1==-1 || flag2 ==-1))
        {
            return -1;
        }
        else
        {   return dist;
        }
        
    }
};