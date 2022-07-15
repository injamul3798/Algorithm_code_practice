//Needfull source : https://algorithms.tutorialhorizon.com/dynamic-programming-coin-change-problem/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int Dp_coin_change(int n,int coins[],int amount){
    sort(coins,coins+n);
    int dp[n+1][amount+1];
    for(int i=0;i<=n;i++){
        dp[i][0]=1;
    }
    for(int j=1;j<=amount;j++){
        dp[0][j]=0;
    }

    //lets start main algorithm
    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            if(coins[i-1]<=j){
                dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
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
