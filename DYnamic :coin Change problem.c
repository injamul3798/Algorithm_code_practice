/*
Q1. Cacar Dokan
Consider you have an uncle who lives in your village. He has a departmental store. In a day, many people come to his shop and buy  different items. Most of the customers give him coins of 100, 500, 1000 BDT. So most of the time he has to give changes to the customers. However, most of the time, to give the change, he uses more coins than the optimal and at the end of the day, he faces problems to give change. Now you have to help your uncle on how to give the changes optimally to the customers where he can manage by giving only the minimum number of coins in the changes.


Input: 
Two integers K, C, where K denotes the amount of money given by the customer to the cashier and C denotes the amount of money he bought from this shope. N is the number of available coins. 

Output: 
Print minimum number of coins needed to give the change. And also print type and number of coins.

Sample Input-1:
500 460
4
2 5 20 30

Sample Input-2:
5690 5627
5
1 2 5 10 15

Sample Output-1:
2
2 coins of 20

Sample Output-2:
6
4 coins of 15
1 coins of 2
1 coins of 1
*/

#include <stdio.h>
void TraceBack(int coins[], int c[], int total, int n) {
    int A[n], B[n], coinIndex = c[total], i = 0, j = 0, count = 0;
    
    for(i = 0; i < n; i++) {
        A[i] = 0;
        B[i] = 0;
    }
    
    i = 0;
    while(total != 0) {
        if(coinIndex == c[total]) {
            A[i] = coins[c[total]];
            B[j] = ++count;
        }
        
        else{
            count = 0;
            coinIndex = coins[c[total]];
            A[++i] = coins[c[total]];
            B[++j] = ++count;
        }
        
        total = total - coins[c[total]];
    }
    for(i = 0; i < n; i++) {
        if(A[i] != 0 && B[i] != 0) {
            printf("%d coins of %d\n", B[i], A[i]);
        }
    }
}
int min(int num1, int num2) {
    if(num1 < num2)
    return num1;
    
    return num2;
}
void DP_coin_change(int coins[], int total, int n) {
    int t[total + 1], c[total + 1], i, j, temp;
    t[0] = 0;
    c[0] = -1;
    for(i = 1; i <= total; i++) {
        t[i] = 100000;
        c[i] = -1;
    }
    for(j = 0; j < n; j++) {
        for(i = coins[j]; i <= total; i++) {
            temp = min(t[i], 1+t[i-coins[j]]);
            if(temp!=t[i]) {
                t[i] = temp;
                c[i] = j;
            }
        }
    }
    printf("%d\n", t[total]);
    TraceBack(coins, c, total, n);
}
int main() {
    int K, C, N, i, total;
    scanf("%d %d", &K, &C);
    scanf("%d", &N);
    int coins[N];
    for(i = 0; i < N; i++) {
        scanf("%d", &coins[i]);
    }
    total = K-C;
    DP_coin_change(coins, total, N);
    
    return 0;
}

