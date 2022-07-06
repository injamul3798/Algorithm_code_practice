/*
The best-case time complexity of quicksort is O(n*logn).
TOPIC: Divide & conquer
code by:
Md. Inajmul Haque
BSc in CSE
*/

#include <iostream>
using namespace std;
int xx=0;

void Sort(int arr[],int n)
{
    int i,j,key;
    for(j=1;j<n;j++){
        key=arr[j];
        i=j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
}
int Greddy(int arr[],int n,int s)
{
    Sort(arr,n);
    
    int i,j;
    int num;
    int k=0;
    int a[100];
    for(i=n-1;i>=0;i--)
    {
        while(s>=arr[i]){
            num=s/arr[i];
            a[k]=arr[i];
            s=s-arr[i];
            xx+=num;
            k++;
        }
        if(s==0){
            break;
        }
        
    }
    if(xx==0)
    {
        printf("Impossible\n");
    }
    else
    {
        printf("%d\n",--xx);
        for(i=0;i<k;i++){
            printf("%d ",a[i]);
        }
    }
}




int main()
{
    int s,n;
    
    int i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&s);
    int x=Greddy(arr,n,s);
    
}


