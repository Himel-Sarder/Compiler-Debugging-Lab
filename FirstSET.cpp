#include <bits/stdc++.h>
using namespace std;

char leftSide[10];
string rightSide[10];

char first[10][10];
int firstCount[10];

void findFirst(int n, char c)
{
    // Terminal
    if(!isupper(c))
    {
        first[n][firstCount[n]++] = c;
        return;
    }

    for(int i = 0; i < 10; i++)
    {
        if(leftSide[i] == c)
        {
            string s = rightSide[i];

            // Epsilon
            if(s == "#")
            {
                first[n][firstCount[n]++] = '#';
                continue;
            }

            char x = s[0];

            // Terminal
            if(!isupper(x))
            {
                first[n][firstCount[n]++] = x;
            }
            else
            {
                findFirst(n, x);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    // Input
    for(int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        leftSide[i] = s[0];
        rightSide[i] = s.substr(3);
    }

    // FIRST
    for(int i = 0; i < n; i++)
    {
        findFirst(i, leftSide[i]);
    }

    // Output
    for(int i = 0; i < n; i++)
    {
        cout << "FIRST(" << leftSide[i] << ") = { ";

        for(int j = 0; j < firstCount[i]; j++)
        {
            cout << first[i][j] << " ";
        }

        cout << "}\n";
    }

    return 0;
}
