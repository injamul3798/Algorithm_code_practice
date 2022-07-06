#include <iostream>
using namespace std;
/*
Md. Inajmul Haque
BSc in CSE
*/
void Binary_search(int arr[],int n){
    int temp,i,count=0;
    cout<<"Enter number to be search: "<<endl;
    //scanf("%d",&temp);
    cin>>temp;  // take elemenet to be search
    int left,right,mid;
    left = 0,right = n-1;
    //mid = (left+right)/2;
    while(left<=right){
        mid = (left+right)/2;
        if(arr[mid]==temp){
            cout<<"Element fount at index : "<<mid<<endl;
            count=1;
            break;
        }
        else if(arr[mid]<temp){
            left = mid+1;
        }
        else{
            right = mid -1;
        }
    }
    if(count = 0) cout<<"Element Not found"<<endl;

}
int main(){
    int n,i;
    //scanf("%d",&n);
    cin>>n;
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    Binary_search(A,n);
}

