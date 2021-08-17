#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Code here  */
    vector<int> nums{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> final;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size()-2; i++)
    {
        for (int j = i + 1; j < nums.size()-1; j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {

                if ((i != j) && (j != k) && (k != i))
                {
                    vector<int> result;

                    if (nums[i] != nums[j])
                    {
                        // cout << "hello";

                        if ((nums[i] + nums[j] + nums[k]) == 0)
                        {
                            result.push_back(nums[k]);
                            result.push_back(nums[j]);

                            result.push_back(nums[i]);
                            final.push_back(result);
                        }
                    }
                }
            }
        }
    }
    final.erase(unique(final.begin(), final.end()), final.end());
    cout << final[0].size() << "                   ";

    for (int i = 0; i < final.size(); i++)
    {
        for (int j = 0; j < final[i].size(); j++)
        {
            cout << "(" << final[i][j] << ")"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}