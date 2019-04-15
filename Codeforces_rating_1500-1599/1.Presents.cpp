#include <bits/stdc++.h>

using namespace std;

int n, tmp, solution[100];  

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> tmp;
        solution[tmp - 1] = i + 1;
    }
    
    for(int i = 0; i < n; i++) cout << solution[i] << " ";

    return 0;
}
