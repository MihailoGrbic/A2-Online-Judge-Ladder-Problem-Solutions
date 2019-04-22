#include <bits/stdc++.h>

using namespace std;

int n, m, a[50], min_diff = -1, diff;

int main()
{
    cin >> n >> m;
    
    for(int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);

    for(int i = 0; i < m - n + 1; i++)
    {
        diff = a[i + n - 1] - a[i];
        if(min_diff == -1 || (min_diff > diff))
            min_diff = diff;
    }
    cout << min_diff;
    return 0;
}
