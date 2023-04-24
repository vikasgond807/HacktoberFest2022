class Solution {
public:
    // int dp[2500][2501];
//     int solve(int i,int n,vector<int> &nums,int last){
//         if(i>=n) return 0;
//         if(dp[i][last+1]!=-1) return dp[i][last+1];
//         if(last==-1 || nums[last]<nums[i]){
//             return dp[i][last+1] = max(solve(i+1,n,nums,i)+1,solve(i+1,n,nums,last));
//         }else{
//             return dp[i][last+1] = solve(i+1,n,nums,last);
//         }
//     }
    
    
    
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        
        // return solve(0,n,nums,-1);
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        for(int i=n-1;i>=0;i--){
            for(int j = i-1;j>=-1;j--){
                if(j==-1 || nums[j]<nums[i]){
                    dp[i][j+1] = max(dp[i+1][i+1]+1,dp[i+1][j+1]);
                }else{
                    dp[i][j+1] = dp[i+1][j+1];
                }
            }
        }
        return dp[0][0];
    }
};
