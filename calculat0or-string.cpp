#include <bits/stdc++.h>
using namespace std;


int main(){
 
/* Code here  */
vector<int> nums { 3, 2, 2, 3 };
int val=3;
vector<string> result;

for(int i=0;i<nums.size();i++)
{
    if(nums[i]!=val)
    {
        string stri = to_string(nums[i]);
        result.push_back(stri);
    }
}

for(int i=result.size();i<nums.size();i++)
{
   result.push_back("_");
}



return result;
}