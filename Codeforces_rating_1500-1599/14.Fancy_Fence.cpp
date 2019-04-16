#include <bits/stdc++.h>

using namespace std;

int t, current_angle;
bool output[180];

int main()
{
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> current_angle;
        output[i] = (360 % (180 - current_angle) == 0);
    }

    for (int i = 0; i < t; i++)
    {
        if(output[i]) cout << "YES";
        else cout << "NO";

        if(i != t - 1) cout << endl;
    }
    
    return 0;
}
