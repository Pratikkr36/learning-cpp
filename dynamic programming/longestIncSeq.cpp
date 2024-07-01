#include<iostream>
#include<vector>
using namespace std;

//for time complexity n square this can be used......
// int longestSeq(vector<int> nums){
//     int n = nums.size();
//     vector<int>dp(n+1, 1);

//     for(int i=1; i<n; i++){
//         for(int j=0; j<=i; j++){
//             if(nums[i]>nums[j] && dp[i]<dp[j]+1){
//                 dp[i] = dp[j]+1;
//             }
//         }
//     }
//     int high = dp[0];
//     for(int i =0; i<dp.size(); i++){
//         if(dp[i]> high){
//             high = dp[i];
//         }
//     }
//     return high;
// }

//for time complexity n lon n we will use this function
int longestSeq(vector <int> nums){
    
    vector <int> dp;
    dp.push_back(nums[0]);
    int count = 1;
    for (int i=1; i<nums.size(); i++){
        if(nums[i] > dp.back()){
            dp.push_back(nums[i]);
            count++;
        }
        else{
            int index = lower_bound(dp.begin(), dp.end(), nums[i]) - dp.begin();
            dp[index] = nums[i];
        }
    }
    return count;
}

int main(){
    vector <int> nums{10,9,2,5,3,7,101,18};
    int ans = longestSeq(nums);
    cout<<ans<<endl;
    return 0;
}