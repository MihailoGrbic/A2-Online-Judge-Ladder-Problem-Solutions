#include <bits/stdc++.h>

using namespace std;

int n, a, b, current = 0, max_current = 0;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        current -= a;
        current += b;
        if(current > max_current) max_current = current;
    }
    
    cout << max_current;
    return 0;
}
