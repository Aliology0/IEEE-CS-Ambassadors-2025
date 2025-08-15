#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define vi vector<int>
#define pi pair<int, int>
#define vc vector<char>
#define si stack<int>
#define sc stack<char>
#define qi queue<int>
#define int long long

using namespace std;

template <typename T>
ostream &operator<<(ostream &os, vector<T> &v)
{
    for (auto &i : v)
        os << i << ' ';
    return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v)
{
    for (auto &i : v)
        is >> i;
    return is;
}
void fastInput()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

void useFile()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void Aliology()
{
    int n;
    cin >> n;
    vi wheels(n);
    cin >> wheels;

    for (int i = 0; i < n; i++)
    {
        int b;
        string moves;
        cin >> b >> moves;
        for (int j = b - 1; j >= 0; j--)
        {
            if (moves[j] == 'U')
            {
                wheels[i] = (wheels[i] - 1 + 10) % 10;
            }
            else
            {
                wheels[i] = (wheels[i] + 1) % 10;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << wheels[i] << (i + 1 == n ? '\n' : ' ');
    }
}

int32_t main()
{
    // useFile();
    fastInput();
    int t;
    cin >> t;
    while (t--)
    {
        Aliology();
    }
    return 0;
}