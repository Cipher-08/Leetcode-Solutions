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
 vector<int> nums{1};/////1 2 2

 sort(nums.begin(),nums.end());
   if(nums.size()==1){
       return nums[0];
   }
 int res;
 for(int i=0;i<nums.size();i++){
     if(nums[i]!=nums[i+1]){
         res = nums[i];
     }
     else{
         i++;
     }
    
 } 



 cout<<res;
 
return 0;
}
