//https://www.artofcse.com/learning/minimum-number-of-coins-to-change-an-amount.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int min(int x,int y){
    if(x<y){
        return x;
    }
    return y;
}
int Dp_coin_change(int n,int coins[],int amount){
    sort(coins,coins+n);
    int dp[n+1][amount+1];
    dp[0][0]=0;
    for(int j=1;j<=amount;j++){
        if(j%coins[0]==0){
            dp[0][j]=j;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=0;j<=amount;j++){
            if(coins[i-1]<=j){
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }

    cout<<"Print the matrix: "<<endl;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=amount;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int ans=dp[n][amount];
    return ans;
}
int main(){
    int n;   cin>>n;
    int coins[n];
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }
    int amount;   cin>>amount;
    int result=Dp_coin_change(n,coins,amount);
    cout<<"Number of ways: "<<result<<endl;
    return 0;
}
