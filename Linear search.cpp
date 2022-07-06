#include <iostream>
using namespace std;
/*
TOPIC: Bruce Force (searching & sorting )
code by:

Md. Inajmul Haque
BSc in CSE
*/
void linear_search(int A[],int n){
    int temp,i,count=0;
    cout<<"Enter number to be search\n"<<endl;
    //scanf("%d",&temp);
    cin>>temp;
    for(i=0;i<n;i++){
        if(A[i]==temp){  //check given number found or Not
          count++;
          break;
        }
    }
    if(count==1){
        printf("Element %d found at index %d",temp,i);
    }
    else{
         printf("Element Not Found");
    }


}
int main(){
    int n,i;
    //scanf("%d",&n);
    cin>>n;
    int A[n];
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    linear_search(A,n);
}
