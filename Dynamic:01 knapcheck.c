Every year, there are several natural disasters that happen in Bangladesh. One of them occurs by fire. Fire damages our valuable products.
That's why the fire service department decided that they will invent a robot to save the most valuable product from fire.
N.B: All products are unbreakable. Either you can take the product or avoid it from taking.

Now they want your help to design the robot to make it happen. Make a program for the robot.

The first line of input will take two integers N and W.
Consider, N is the total number of products available in a particular room from where the products need to be taken away. W is the total weight carrying capability of the robot.
Second-line take N space-separated integers which indicate the Weight of the N products.
The third line will take N space-separated integers which indicate the value of the N products.

Now, display the maximum value that could be saved from that particular room by the robot.

Sample input:
4 9
4 2 3 6
3 7 6 4
Sample Output:
16

Sample input:
4 13
3 4 6 1
2 1 4 3
Sample Output:
9
  
  
code
-------
#include<stdio.h>
int Max(int num1,int num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}
int KnapCheck(int S,int s[],int v[],int n){
    int i,j;
    int V[n+1][S+1];
    for(i=0;i<=n;i++){
        for(j=0;j<=S;j++){
            if(i==0 || j==0){
                V[i][j]=0;
            }
            else if(s[i-1]<=j){
                V[i][j]=Max(v[i-1]+V[i-1][j-s[i-1]],V[i-1][j]);
            }
            else{
                V[i][j]=V[i-1][j];
            }
        }
        
    }
    return V[n][S];
    
}
int main(){
    int n,S;
    scanf("%d%d",&n,&S);
    int V[n],w[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&w[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&V[i]);
    }
    int total=KnapCheck(S,w,V,n);
    printf("%d\n",total);
    
}
