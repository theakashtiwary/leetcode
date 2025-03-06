class Solution {
public:
    using LL = long long;
    using VL = vector<LL>;
    LL coloredCells(int n) {
        VL dp(n + 1);
        dp[1] = 1;
        for (auto i{ 2 }; i <= n; ++i)
            dp[i] = dp[i - 1] + 4 * (i - 1);
        return dp[n];
    }
};