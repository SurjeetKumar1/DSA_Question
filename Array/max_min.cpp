class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
        // code here
        long long max=a[0];
       long long min=a[0];
        for(int i=0;i<n-1;i++){
          
                if(min>a[i]){
                    min=a[i];
                }
             if(max<a[i+1]){
                 max=a[i+1];
             } 
          
            }
                if(min>a[n-1]){
                 min=a[n-1];
             }
        
        return make_pair(min,max);
        
    }
};