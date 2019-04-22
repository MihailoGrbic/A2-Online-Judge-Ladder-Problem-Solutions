#include <bits/stdc++.h>

using namespace std;

string input, goal = "hello";
int goal_index = 0, goal_length = goal.length();

int main()
{
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if(input[i] == goal[goal_index]) goal_index++;
        if(goal_index == goal_length)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
