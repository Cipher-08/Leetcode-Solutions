/* Hi Cypher */ 
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;


int main(){
   //
/*Code here Saksham*/
    //
    
    int n;
    int m;
    cout<<"No. of rows and columns respectively :: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter the mattrix :: "<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            cin>>arr[i][j];
        }
        
    }
    cout<<"The mattrix you entered is :: "<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int key;
    cin>>key;
    bool flag = false ;
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            if(arr[i][j]==key){
                flag=true;
                cout<<"AT :: "<<i<<"X"<<j;
                break;
            }
        }
        
    }
    if (flag==true)
    {
        cout<<"element is founded !!";
    }
    else{
        cout<<-1;
    }
    
}
/*Saksham Awasthi : A noob Coder .......*/
   
   
   
