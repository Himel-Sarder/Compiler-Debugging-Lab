#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for(int i = 1; i <= n; i++)
    {
        string s;
        getline(cin, s);

        cout << "String " << i << endl;

        string token = "";
        int count = 1;

        for(char c : s)
        {
            if(c == ' ')
            {
                if(token != "")
                {
                    cout << "Token " << count++ << ": " << token << endl;
                    token = "";
                }
            }
            else
            {
                token += c;
            }
        }

        if(token != "")
        {
            cout << "Token " << count << ": " << token << endl;
        }

        cout << endl;
    }

    return 0;
}
