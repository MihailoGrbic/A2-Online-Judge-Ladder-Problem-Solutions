#include <bits/stdc++.h>

using namespace std;

string first, second, third;
int tmp, letter_appearances[26];

int main()
{
    cin >> first;
    cin >> second;
    cin >> third;

    for (int i = 0; i < 26; i++) letter_appearances[i] = 0;

    for (int i = 0; i < first.length(); i++)
    {
        tmp = first[i] - 'A';
        letter_appearances[tmp]++;
    }

    for (int i = 0; i < second.length(); i++)
    {
        tmp = second[i] - 'A';
        letter_appearances[tmp]++;
    }

    for (int i = 0; i < third.length(); i++)
    {
        tmp = third[i] - 'A';
        letter_appearances[tmp]--;
    }

    for (int i = 0; i < 26; i++)
        if(letter_appearances[i] != 0)
        {
            cout << "NO";
            return 0;
        }

    cout << "YES";
    return 0;
}
