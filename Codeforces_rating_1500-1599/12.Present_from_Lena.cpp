#include <bits/stdc++.h>

using namespace std;

int n, numbers_in_row;
cin >> n;

int main()
{
    for(int i = 0; i < n * 2 + 1; i++)
    {
        for(int j = 0; j < abs(n - i) * 2; j++)
        {
            cout << " ";
        }

        numbers_in_row = (n - abs(n - i)) * 2 + 1;
        for(int j = 0; j < numbers_in_row; j++)
        {
            cout << numbers_in_row / 2 - abs(numbers_in_row / 2 - j);
            if(j != numbers_in_row - 1) cout << " ";
        }
        
        if(i != n * 2)cout << endl;
    }
    return 0;
}
