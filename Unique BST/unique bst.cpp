#include<iostream>
#include<vector>
using namespace std
int numTrees(int n) {
    vector<int> dp(n + 10, 0);
    dp[0] = 1; // Null tree is still a tree
    dp[1] = 1;
    for (int i=2; i <= n; i++) {
        for (int j=0; j < i; j++) {
            dp[i] += dp[j] * dp[i - j - 1];
        }
    }
    return dp[n];
}
int main()
{
int n;
cout<<"Enter number of nodes:";
cin>>n;
cout<<"Total numbers of unique binary tree possible are "<<numTrees(n);
return 0;
}
