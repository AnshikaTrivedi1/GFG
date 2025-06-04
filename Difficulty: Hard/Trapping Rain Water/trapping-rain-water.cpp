class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n=arr.size();
        vector<int>a(n);
        vector<int>b(n);
        vector<int>c(n);
        int m=-1;
        for(int i=0;i<n;i++){
            a[i]=m;
            if(m<arr[i]){
                m=arr[i];
            }
        }
        m=-1;
        for(int i=n-1;i>0;i--){
            b[i]=m;
            if(arr[i]>m){
                m=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                c[i]=a[i];
            }
            else{
                c[i]=b[i];
            }
        }
        int volume=0;
        for(int i=0;i<n;i++){
            if(arr[i]<c[i]){
                volume=volume+(c[i]-arr[i]);
            }
        }
        return volume;
    }
};