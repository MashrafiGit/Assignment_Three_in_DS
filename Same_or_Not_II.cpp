#include <bits/stdc++.h>
using namespace std;

class MyStack
{
public:
    list<int> s;

    void push(int x)
    {
        s.push_back(x);
    }

    void pop()
    {
        if (!s.empty())
        {
            s.pop_back();
        }
    }

    int top()
    {
        if (!s.empty())
        {
            return s.back();
        }
        return -1;
    }

    int size()
    {
        return s.size();
    }

    bool empty()
    {
        return s.empty();
    }
};

class MyQueue
{
public:
    list<int> q;

    void push(int x)
    {
        q.push_back(x);
    }

    void pop()
    {
        if (!q.empty())
        {
            q.pop_front();
        }
    }

    int top()
    {
        if (!q.empty())
        {
            return q.front();
        }
        return -1;
    }

    int size()
    {
        return q.size();
    }

    bool empty()
    {
        return q.empty();
    }
};

int main()
{

    int n, m;
    cin >> n >> m;

    int x;
    MyStack s;
    while (n--)
    {
        cin >> x;
        s.push(x);
    }

    int y;
    MyQueue q;
    while (m--)
    {
        cin >> y;
        q.push(y);
    }

    bool flag = true;

    while (true)
    {
        if (s.empty() && q.empty())
            break;

        if (!s.empty() && !q.empty())
        {
            if (s.top() == q.top())
            {
                s.pop();
                q.pop();
            }
            else
            {
                flag = false;
                break;
            }
        }
        else if (!s.empty())
        {
            flag = false;
            break;
        }
        else if (!q.empty())
        {
            flag = false;
            break;
        }
    }

    if (flag && s.empty() && q.empty())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}