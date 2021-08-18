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
 vector<int> nums{0,2,3};
 if(nums.size()==1)
 {
     return 1;
 }
int res=0;
int l = nums.size();
nums.push_back(l);

sort(nums.begin(), nums.end());
if(nums[0]!=0){
    return 0;
}
for (int i = 0; i < nums.size(); i++)
{
   if(nums[i]!=i){
   
   }
 }
if(res==0){
    return l;
}
return res;
}
