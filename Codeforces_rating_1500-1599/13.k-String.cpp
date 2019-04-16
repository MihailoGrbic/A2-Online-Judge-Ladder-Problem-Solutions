#include <bits/stdc++.h>

using namespace std;

int k, char_index, number_of_appearances[26];
char current_char;
string input;

int main()
{
    cin >> k;
    cin >> input;

    for (int i = 0; i < 26; i++) number_of_appearances[i] = 0;

    for(int i = 0; i < input.length(); i++)
    {
        char_index = input[i] - 'a';
        number_of_appearances[char_index]++;
    }

    for (int j = 0; j < 26; j++)
        if(number_of_appearances[j] % k != 0)
        {
            cout << "-1";
            return 0;
        }

    for (int i = 0; i < k; i++)
        for (int j = 0; j < 26; j++)
            for(int l = 0; l < number_of_appearances[j] / k; l++)
                cout << (char)('a' + j);

    return 0;
}
