#include <bits/stdc++.h>

using namespace std;

string first, second;

int main()
{
    cin >> first;
    cin >> second;

    for (int i = 0; i < first.length(); i++)
    {
        if (first[i] != second[i]) cout << '1';
        else cout << '0';
    }

    return 0;
}
