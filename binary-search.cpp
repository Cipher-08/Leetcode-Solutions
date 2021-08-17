/* Hi Cypher */ 
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int key){

    int s=0;
    int e=n;
    while (s<=e)
    {
        /* code */
        int mid = (s+e)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
    
}
int main(){
   //
/*Code here Saksham*/
    //
    int n;
    int arr[n];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr,n,key);
    
}