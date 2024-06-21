#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int coinChange(vector<int>coins, int amount){
    vector <int> dp(amount + 1);
    dp[0] = 0;
    for(int i=1; i<=amount; i++){
        dp[i] = INT_MAX;
        for(int j=0; j<coins.size(); j++){
            if(coins[j]<=i && dp[i-coins[j] != INT_MAX]){
                dp[i] = min(dp[i], 1+dp[i-coins[j]]);
            }
        }
    }
    if(dp[amount] == INT_MAX)return -1;
    return dp[amount];
}

int main(){
    vector <int> coins{1,2,5};
    int amount = 11;
    int ans = coinChange(coins, amount);
    cout<<ans<<endl;
    return 0;
}