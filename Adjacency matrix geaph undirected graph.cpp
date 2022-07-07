#include <iostream>
using namespace std;
int adj[100][100];  //assume a matrix size of 100 X 100
//But you can take small size or big
int main(){
    int node,edge;
    cout<<"Enter node & edge: ";
    cin>>node>>edge;  //takes node & edge from user
    while(edge--){
        int n1,n2;   cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;
    }
    //Print the matrix
    cout<<"\nHere is the matrix"<<endl;
    for(int i=0;i<node;i++){
        for(int j=0;j<node;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

/*
input:
input:
Enter node & edge: 5 6
0 1
0 2
1 2
1 3
1 4
3 4
*/
