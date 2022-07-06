#include <iostream>
using namespace std;
/*
TOPIC: Bruce Force (searching & sorting )
code by:
Md. Inajmul Haque
BSc in CSE
*/

void insertion(int A[],int n){
    int i,j;
    int key;
    for(j=1;j<n;j++){
        key=A[j];
        i=j-1;
        while(i>=0 && A[i]>key){
            A[i+1]=A[i];
            i--;
        }
        A[i+1]=key;
    }
    for(i=0;i<n;i++){
      // printf("%d\t",A[i]);
      cout<<A[i]<<" ";
    }
}

//Time complexity = O(n*n)=O(n^2)

int main(){
     int n,i;
     cin>>n;
     int A[n];
    for(i=0;i<n;i++){
       cin>>A[i];
    }
    insertion(A,n);
}

