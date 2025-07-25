#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            string str;
            cin >> str;
            q.push(str);
        }
        else if (x == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
                cout << "Invalid" << endl;
        }
    }

    return 0;
}
