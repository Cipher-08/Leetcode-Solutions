/* Hi Cypher */ 
/*Happy CODING :) */
#include <bits/stdc++.h>
using namespace std;


int main(){
   //
/*Code here Saksham*/
    //
    int number,last_digit;
    cin>>number;
    int sum=0;
    int original=number;
    while(number>0){
         last_digit = number%10;
        //  cout<<last_digit<<endl;
         sum+=pow(last_digit,3);

         number = number / 10;
    }
  

    if (sum == original)
    {
        cout<<"Armstrong";
    }
    else{
        cout<<"Not an armstrong number ";
    }
}