#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        stack<char> s;

        for (char ch : str)
        {
            if (!s.empty() && s.top() == '0' && ch == '1')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
        if (s.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
