/* Hi Cypher */ 
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;

int factorial(int num)
{
    int product = 1;

    for (int i = 1; i <= num; i++)
    {
        /* code */
        product = product * i;
    }
    return product;
}

int main(){
   //
/*Code here Saksham*/
    //
    int n,r;
    cout<<"Enter the value of n  :  ";
    cin>>n;
    cout<<"Enter the value of r  :  ";
    cin>>r;
    int bin;
    int a = (factorial(n));
    int b = (factorial(n - r) * factorial(r));
        bin = a/b;
     
    cout<<bin;

}