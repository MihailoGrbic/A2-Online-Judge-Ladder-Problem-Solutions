#include <bits/stdc++.h>

using namespace std;

string word;
int n;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> word;

        if(word.length() <= 10)
            cout << word << endl;
        else
            cout << word[0] << word.length() - 2 << word[word.length() - 1] << endl;
    }
    
    return 0;
}
