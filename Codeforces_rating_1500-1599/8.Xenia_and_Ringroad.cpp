#include <bits/stdc++.h>

using namespace std;

int n, m, current, past = 1;
long long counter = 0;

int main()
{
    cin >> n >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> current;
        
        if(current >= past) 
            counter += current - past;
        else 
            counter += current - past + n;

        past = current;
    }

    cout << counter;
    return 0;
}
