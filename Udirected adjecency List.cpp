#include <iostream>
using namespace std;
#include<vector>
int main(){
    int node,edge;
    cout<<"Enter node & edge: ";
    cin>>node>>edge;  //takes node & edge from user
    vector<int> v[node]; // //will store all value
    while(edge--){
        int n1,n2;   cin>>n1>>n2;
        v[n1].push_back(n2);
        v[n2].push_back(n1);
    }
    //check node 3 values
    for(int i=0;i<v[3].size();i++){

        cout<<v[3][i]<<" ";
    }
    return 0;
}

