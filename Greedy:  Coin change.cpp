/*
The best-case time complexity of quicksort is O(n*logn).
TOPIC: Divide & conquer
code by:
Md. Inajmul Haque
BSc in CSE
*/
/*
Mr. Rahim has a Shop in Bashundhara City. He sells many mobile phones and accessories every day.
Sometimes his customers do not have change of the actual price and give Mr Rahim more money. Then Rahim needs to return the additional money to the customers.
One day, he sold a phone to his customer. The price of the phone was 25300 BDT.  The customer gave him 26000 BDT.

To return the additional amount of money, Mr. Rahim opened his cash vault and saw that there were 500 BDT, 100 BDT, 1000 BDT, 50 BDT, 20 BDT notes available.
Then Mr. Rahim returned the customer a 500 BDT note and four 50 BDT notes. Do you think that Rahim used the optimal solution to give the change? If not, how can you help Rahim to give the optimal solution using a minimum number of notes.

You will be given an integer N (denote the number of available notes). The next line contains the values of N notes.
Now, your task is to find the minimum number of notes to make the change. 
If it is possible to change then your output will be in 2 lines. First line contains an integer K (denotes the number of minimum notes). Second line contains K integers (the values of the notes).

If it is not possible to make the change then the output will display only a string "Impossible".

Sample Input:
5
500 1000 100 50 20
700
Sample Output:
3
500 100 100


Sample Input:
6
1000 20 50 200 10 500
665
Sample Output:
Impossible
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


