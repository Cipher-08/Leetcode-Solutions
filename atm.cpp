#include <bits/stdc++.h>
using namespace std;

int main()
{

    /* Code here  */
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x1, x2, y1, y2, z1, z2;
        cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;

        if ((x1 < x2 || x1 == x2) && (y1 < y2 || y1 == y2) && (z1 > z2 || z1 == z2))
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }
    return 0;
}