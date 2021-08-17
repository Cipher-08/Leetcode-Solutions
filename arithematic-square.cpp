#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Code here  */
    int n;
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        int arr[3][3];
        arr[1][1] = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (i == 1 && j == 1)
                {
                    arr[i][j] == 0;
                }
                else
                {
                    cin >> arr[i][j];
                }
            }
        }
        int diff = arr[0][2] - arr[2][0];
        diff = diff / 2;
        arr[1][1] = arr[2][0] + diff;
        int count = 0;

        if (arr[2][0] - arr[1][1] == arr[1][1] - arr[0][2])
        {
            count++;
        }
        if (arr[0][2] - arr[0][1] == arr[0][1] - arr[0][0])
        {
            count++;
        }
        if (arr[1][2] - arr[1][1] == arr[1][1] - arr[1][0])
        {
            count++;
        }
        if (arr[2][2] - arr[2][1] == arr[2][1] - arr[2][0])
        {
            count++;
        }
        if (arr[2][2] - arr[1][1] == arr[1][1] - arr[0][0])
        {
            count++;
        }
        if (arr[2][0] - arr[1][0] == arr[1][0] - arr[0][0])
        {
            count++;
        }
        if (arr[2][1] - arr[1][1] == arr[1][1] - arr[0][1])
        {
            count++;
        }
        if (arr[2][2] - arr[1][2] == arr[1][2] - arr[0][2])
        {
            count++;
        }
        else
        {
            count = count;
        }

        cout << "Case #" << i << ": " << count << endl;
    }

    return 0;
}