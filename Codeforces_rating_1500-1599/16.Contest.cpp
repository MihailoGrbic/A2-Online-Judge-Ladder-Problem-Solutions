#include <bits/stdc++.h>

using namespace std;

int a, b, c, d, misha_points, vasya_points;

int main()
{
    cin >> a >> b >> c >> d;

    misha_points = max((3 * a) / 10, a - a * c / 250);
    vasya_points = max((3 * b) / 10, b - b * d / 250);

    if(misha_points > vasya_points)
    {
        cout << "Misha";
        return 0;
    }
    if(vasya_points > misha_points)
    {
        cout << "Vasya";
        return 0;
    }
    
    cout << "Tie";
    return 0;
}
