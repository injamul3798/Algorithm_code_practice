/*
The best-case time complexity of quicksort is O(n*logn).

TOPIC: Divide & conquer
code by:
Md. Inajmul Haque
BSc in CSE
*/

#include <iostream>
using namespace std;
int Merge(int A[],int left,int Right,int mid){
    int n1,n2,i,j,k;
    n1=mid-left+1;
    n2=Right-mid;
    int L[n1];
    int R[n2];
    for(i=0;i<n1;i++){
        L[i]=A[left+i];
    }
    for(j=0;j<n2;j++){
        R[j]=A[mid+1+j];
    }
    i=j=0;
    k=left;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i++;
        }
        else{
            A[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        A[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        A[k]=R[j];
        j++;
        k++;
    }
}
void MergeSort(int A[],int left,int Right){
    int mid;
    if(left<Right){
        mid=(left+Right)/2;
        MergeSort(A,left,mid);
        MergeSort(A,mid+1,Right);
        Merge(A,left,Right,mid);
        
    }
}
int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
       cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}
