#include<iostream>
#include<vector>
using namespace std;

// int combinationSum4(vector<int>nums, int target){
//     int m = nums.size();
//     vector<int>dp(target+1, 0);
//     for(int i=1; i<=target; i++){
//         for(int j=0; j<m; j++){
//             if(nums[j] < i){
//                 dp[i] = dp[i] + dp[i - nums[j]];
//             }else if(nums[j] == i){
//                 dp[i] = dp[i] + 1;
//             }
//         }
//     }
//     return dp[target];
// }

int cs(vector<int>&nums, int target, vector<int>&dp){
    if(dp[target]>-1)return dp[target];

    int count = 0;
    for(int i=0; i<nums.size(); i++){
        if(target >= nums[i]){
            count += cs(nums, target-nums[i], dp);
        }
    }
    dp[target] = count;
    return count;
}

int combinationSum4(vector<int>& nums, int target){
    vector<int>dp(target+1, -1);
    dp[0]=1;
    cs(nums, target, dp);
    return dp[target];
}

int main(){
    vector<int>nums{1,2,3};
    int target = 4;
    int ans = combinationSum4(nums, target);
    cout<<ans<<endl;
    return 0;
}