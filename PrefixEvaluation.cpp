#include <bits/stdc++.h>
using namespace std;

int main()
{
    string exp;   // *+532
    cin >> exp;

    stack<int> st;

    // Prefix: Right to Left
    for(int i = exp.length() - 1; i >= 0; i--)
    {
        char ch = exp[i];

        if(isdigit(ch))
        {
            st.push(ch - '0');
        }
        else
        {
            int a = st.top();
            st.pop();

            int b = st.top();
            st.pop();

            int result;

            if(ch == '+')
                result = a + b;
            else if(ch == '-')
                result = a - b;
            else if(ch == '*')
                result = a * b;
            else if(ch == '/')
                result = a / b;

            st.push(result);
        }
    }

    cout << "Result = " << st.top();

    return 0;
}
