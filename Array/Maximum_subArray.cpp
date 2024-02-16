// #include <vector>
// first approach to find out maxSub Array;

// class Solution {
// public:
//     int maxSum = -1;
//     int maxSubArray(vector<int>& nums) {

//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             int currSum = 0;
//             for (int j = i; j < n; j++) {
//                 currSum = currSum + nums[j];
//                 if (currSum > maxSum) {
//                     maxSum = currSum;
//                 }
//             }
//         }
//         return maxSum;
//     }
// };


// help of Kadanes's Algorithem

class Solution {
public:
int maxSum=-9999999999;
int currSum=0;
    int maxSubArray(vector<int>& nums) {
   for(int i=0;i<nums.size();i++){
       currSum=currSum+nums[i];
       if(currSum>maxSum){
           maxSum=currSum;
       }
       if(currSum<0){
           currSum=0;
       }
       
   }
   return maxSum;
   
      
    }
};