/*Saksham Awasthi : A noob Coder .......*/
   
   
   
   
#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */

int n,m;
cin>>n>>m;
int arr[n][m];

for (int i = 0; i < n; i++)
{
    /* code */
    for (int j = 0; j < m; j++)
    {
        /* code */
        cin>>arr[i][j];
    }
    
}
cout<<"enter ::";
int target ;
cin>>target;
bool flag = false;
for (int i = 0; i < n; i++)
{
    /* code */
    for (int j = 0; j < m; j++)
    {
        /* code */
        if(arr[i][j]==target){
           flag=true;
        }
        else if (arr[i][j]>target)
        {
            j--;
        }
        else{
            i++;
        }
    }
}
if(flag){
    cout<<"found";

}
else{
    cout<<"Not";
}

return 0;
}