#include <bits/stdc++.h>

using namespace std;

long long n;
int counter = 0, tmp;

int main()
{

    cin >> n;

    while (n > 0)
    {
        tmp = n % 10;
        if (tmp == 4 || tmp == 7) counter++;
        n /= 10;
    }

    if(counter == 4 || counter == 7) cout << "YES";
    else cout << "NO";

    return 0;
}
