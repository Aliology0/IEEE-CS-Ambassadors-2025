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
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    while (Q--)
    {
        string Operation;
        cin >> Operation;
        if (Operation == "pop_back")
        {
            S.pop_back();
        }
        else if (Operation == "front")
        {
            cout << S.front() << "\n";
        }
        else if (Operation == "back")
        {
            cout << S.back() << "\n";
        }
        else if (Operation == "sort")
        {
            int L, R;
            cin >> L >> R;
            sort(S.begin() + L - 1, S.begin() + R);
        }
        else if (Operation == "reverse")
        {
            int L, R;
            cin >> L >> R;
            reverse(S.begin() + L - 1, S.begin() + R);
        }
        else if (Operation == "print")
        {
            int pos;
            cin >> pos;
            cout << S[pos - 1] << "\n";
        }
        else if (Operation == "substr")
        {
            int L, R;
            cin >> L >> R;
            cout << S.substr(L - 1, R - L + 1) << "\n";
        }
        else if (Operation == "push_back")
        {
            char c;
            cin >> c;
            S.push_back(c);
        }
    }
}

int32_t main()
{
    // useFile();
    fastInput();
    int t = 1;
    while (t--)
    {
        Aliology();
    }
    return 0;
}