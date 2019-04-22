#include <bits/stdc++.h>

using namespace std;

int n, taken_index, sum = 0, taken_sum = 0, a[100];

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a + n);
    taken_index = n - 1;

    while(taken_sum < (sum / 2) + 1)
    {
        taken_sum += a[taken_index];
        taken_index--;
    }
    
    cout << n - taken_index - 1;
    return 0;
}
