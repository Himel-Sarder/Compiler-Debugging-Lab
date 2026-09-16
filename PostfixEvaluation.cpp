#include <bits/stdc++.h>
using namespace std;

int main()
{
    string exp;
    cin >> exp;

    stack<int> st;

    for(char ch : exp)
    {
        if(isdigit(ch))
        {
            st.push(ch - '0');
        }
        else
        {
            int b = st.top();
            st.pop();

            int a = st.top();
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
