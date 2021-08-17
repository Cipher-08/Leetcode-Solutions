/*By Saksham Awasthi*/
#include <bits/stdc++.h>
using namespace std;
       

#define n_size       100000
#define mod     1000000007
#define loop(i,a,b) for(int i=a;i<b+1;i++)



int main(){
 
 vector<int> coins{186,419,83,408} ;
 vector<int> result;
 int amount=6249;
 int count=0;

 stack<int> st;
 sort(coins.begin(),coins.end());

 for(int i=0;i<coins.size();i++)
 {
     st.push(coins[i]);
 }
 while(!st.empty()&&count!=amount+1){
     while(count+st.top()<=amount){
         count+=st.top();
         result.push_back(st.top());
        
     }
     st.pop();
 }
 cout<<count<<endl;
 if(count<amount){
     return -1;
 }
cout<<result.size();
 
return result.size();
}
