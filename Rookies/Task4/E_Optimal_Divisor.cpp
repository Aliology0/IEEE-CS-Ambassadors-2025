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

    int bestVal = -1;
    int bestX = 2;

    for (int x = 2; x <= n; ++x)
    {
        int k = n / x;
        int val = x * k * (k + 1) / 2;
        if (val > bestVal)
        {
            bestVal = val;
            bestX = x;
        }
    }

    cout << bestX << "\n";
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