#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Number of identifiers to test: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;

        bool valid = true;

        // Check first character
        if(!isalpha(s[0]) && s[0] != '_')
        {
            valid = false;
        }

        // Check remaining characters
        for(int j = 1; j < s.length(); j++)
        {
            if(!isalnum(s[j]) && s[j] != '_')
            {
                valid = false;
                break;
            }
        }

        // Keyword check
        string keywords[] =
        {
            "int", "float", "double", "char",
            "if", "else", "for", "while",
            "do", "return", "class", "public",
            "private", "void", "switch", "case"
        };

        for(string key : keywords)
        {
            if(key == s)
            {
                valid = false;
                break;
            }
        }

        cout << "Identifier " << i << ": ";

        if(valid)
            cout << "Valid" << endl;
        else
            cout << "Invalid" << endl;
    }

    return 0;
}
