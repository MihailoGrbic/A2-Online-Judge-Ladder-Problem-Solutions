#include <bits/stdc++.h>

using namespace std;

string input;

bool is_vowel(char a)
{
    if (a == 'a') return true;
    if (a == 'e') return true;
    if (a == 'o') return true;
    if (a == 'u') return true;
    if (a == 'i') return true;
    if (a == 'y') return true;
    if (a == 'A') return true;
    if (a == 'E') return true;
    if (a == 'O') return true;
    if (a == 'U') return true;
    if (a == 'I') return true;
    if (a == 'Y') return true;
    return false;
}

int main()
{
    cin >> input;

    for(int i = 0; i < input.length(); i++)
    {
        if(!is_vowel(input[i]))
        {
            cout << ".";
            if(input[i] < 'a')
                cout << (char)((input[i] - 'A') + 'a');
            else
                cout << input[i];
        }
    }

    return 0;
}
