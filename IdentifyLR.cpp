#include <iostream>
using namespace std;

int main()
{
    string p;

    cout << "Enter a Production: ";
    cin >> p;

    char left = p[0];

    int pos = p.find("->");

    int foundAt = -1;
    bool found = false;

    for(int i = pos + 2; i < p.length(); i++)
    {
        if(p[i] == left)
        {
            if(i == pos + 2 || p[i - 1] == '|')
            {
                found = true;
                foundAt = i;
                break;
            }
        }
    }

    if(found)
    {
        cout << "Left Recursion found at index " << foundAt;
    }
    else
    {
        cout << "Left Recursion not found!";
    }

    return 0;
}
