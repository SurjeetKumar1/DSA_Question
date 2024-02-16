//. Contains Duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int check;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            check=nums[i];
            for(int j=i+1;j<n;j++){
                if(check==nums[j]){
                    return true;
                }
            }

        }
        return false;
    }
};