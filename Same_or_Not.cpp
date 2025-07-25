#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    stack<int> s;
    queue<int> q;

    int x;
    while (n--)
    {
        cin >> x;
        s.push(x);
    }

    int y;
    while (m--)
    {
        cin >> y;
        q.push(y);
    }

    bool flag = true;
    while (!s.empty() && !q.empty())
    {
        if (s.top() != q.front())
        {
            flag = false;
            break;
        }
        s.pop();
        q.pop();
    }

    if (flag && s.empty() && q.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}