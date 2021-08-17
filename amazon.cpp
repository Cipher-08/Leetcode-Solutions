#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
string a="aaaabcccedddfff";
sort(a.begin(),a.end());
// cout<<a;

if(a.length()==1)return a[0];

for(int i=0;i<a.length();i++)
{
    if(a[i]!=a[i-1]&&a[i]!=a[i+1])
    {
        cout<<a[i]<<endl;
    }
}
 
return 0;
}