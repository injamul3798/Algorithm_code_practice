/*One day Atik Bhuiyan went to a supermarket for shopping. He bought some products of different weights. After buying all of his required products, the shopkeeper gave him some bags each with equal capacity. Every bag can carry the same amount of weights, W. The Shopkeeper told him to use a minimum number of bags to carry those products.

Atik Bhuiyan was thinking for a while. After some time, He started sorting items in descending order according to their weights. However, he could not put the products into those bags in an optimal way so a minimum number of bags can be used. Suddenly one of his friends was passing by the shop and Atik Bhuiyan saw him. Atik Bhuiyan told him about the problem. Then his friend told him that there is an algorithm named FFD and he can easily solve the problem by using it.

Now, your task is to write a program that will take an integer N(5<=N<=50) which denotes the number of products. The next line contains N integer values (weights of those products). The last line takes a value K (the capacity of each bag).
You have to print an integer which denotes the minimum number of bags required.

Sample Input:
 6
6 5 4 3 2 1
7
Sample Output:
3
 
Sample Input:
10
6 1 5 1 4 2 3 3 3 2
7
Sample Output:
5*/
#include<stdio.h>

void  Bags(int A[],int size,int c){
    int i,j;
    int bags[size];
    for(i=0;i<size;i++){
        bags[i]=0;
    }
    
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(bags[j]+A[i]<=c){
                bags[j]=bags[j]+A[i];
                break;
            }
        }
    }
    int count=0;
    for(i=0;i<size;i++){
        if(bags[i]!=0){
            count++;
        }
    }
    
    printf("%d\n",count);
}
void Sort(int arr[],int n){
    int i,j;
    int temp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n-1;j++){
            if(arr[j]>arr[i]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        
        }
   }
}
int main(){
    int i,n;
    int capacity;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&capacity);
    Sort(arr,n);
    Bags(arr,n,capacity);
}
