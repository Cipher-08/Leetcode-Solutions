/*By Saksham Awasthi*/
#include <bits/stdc++.h>
using namespace std;
       

#define n_size       100000
#define mod     1000000007
#define loop(i,a,b) for(int i=a;i<b+1;i++)


class Node{
         public:
         int data;
         Node* next;
         Node* previous;
         Node(int n)
         {
            data=n;
       }
};

int main(){
 
 string s="saksham";
 string t="sakshama";

stack<char> st;
 for(int i=0;i<s.size();i++){
     st.push(s[i]);
 }
char res;
for(int i=0;i<s.size();i++){
int count=0;

    for(int j=0;j<t.size();j++){
        if(t[j]==s[i]){
          count=1;
        }
        else{
            count=0;
        }
    }
    if(count==0){
        res=st.top();
    }
    st.pop();
}
cout<<res;
return 0;
}
