/* Hi Cypher */ 
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;


int main(){
   //
/*Code here Saksham*/
    //
    int n;
    int arr[n];
    cout<<"Number of array required :: -> ";

    cin>>n;
    int max=INT_MIN;
    int min=INT_MAX;

    cout<<"Enter Array :: ";
    
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];

    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }

    }
    cout<<"Minimum : "<<min<<endl;
    cout << "Maximum : " << max << endl;
}