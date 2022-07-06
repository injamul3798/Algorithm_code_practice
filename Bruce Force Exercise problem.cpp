/*Q1. Find the Median
Mr. X is a student of Computer Science. He is facing a problem and  needs your help to solve it.
The problem is, you will be given N integer numbers( 4<n<=100) which are arranged side by side (x1,x2,x3,x4,.....).
Now you have to sort those items in ascending order. After doing this , your job is to print the items in a sorted way and find the median.
[NB: when N is odd  , Median= (N+1)/2; When N is even Median= (N/2)+1 ]

Sample Input: 
7
4 7 11 2 9 3 5
Sample Output:
2 3 4 5 7 9 11
5  */

/*/*
TOPIC: Bruce Force (searching & sorting )
code by:
Md. Inajmul Haque
BSc in CSE
*/

#include <iostream>
using namespace std;
void median(int arr[],int n){
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
    for(i=0;i<n;i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
    
    if(n%2==0){
        printf("%d\n",arr[(n/2)]);
    }
    else{
        printf("%d\n",arr[(n)/2]);
    }
}
int main(){
    int i,n;
     cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    median(arr,n);
    
}
