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
bool pal(vector<int>&nums){
        int count=0;
      for(int i=0;i<nums.size();i++){
          if(nums[i]==nums[nums.size()-i-1]){
              count++;
              cout << nums[i] << "   " << nums[nums.size() - i - 1] << endl;
          }
      }
        if(count==nums.size())return true;
        else return false;
    }

int main(){
 
 vector<int> n{1,2};
 cout<<pal(n);

return 0;
}
