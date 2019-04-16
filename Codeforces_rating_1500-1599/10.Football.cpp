#include <bits/stdc++.h>

using namespace std;

string input;
int counter = 0;

int main()
{
    cin >> input;

    for(int i = 1; i < input.length(); i++)
    {
        if(input[i] == input[i - 1]) counter++;
        else counter = 0;
        
        if(counter == 6)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
