#include <bits/stdc++.h>

using namespace std;

int n, current_h, max_h = 0;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> current_h;
        if(current_h > max_h) max_h = current_h;
    }

    cout << max_h;
    return 0;
}
