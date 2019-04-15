#include <bits/stdc++.h>

using namespace std;

string first, second;
int first_index, second_index;

int main()
{
    cin >> first;
    cin >> second;

    for (int i = 0; i < first.length(); i++)
    {
        if(first[i] >= 'a') 
            first_index = first[i] - 'a';
        else
            first_index = first[i] - 'A';
        if(second[i] >= 'a') 
            second_index = second[i] - 'a';
        else
            second_index = second[i] - 'A';

        if(first_index < second_index)
        {
            cout << "-1";
            return 0;
        }
        if(second_index < first_index)
        {
            cout << "1";
            return 0;
        }
    }

    cout << "0";
    return 0;
}
