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
    string S;
    getline(cin, S);
    int n = S.size();
    int LeftOfWord = 0;
    while (LeftOfWord < n)
    {
        while (S[LeftOfWord] == ' ')
        {
            cout << ' ';
            LeftOfWord++;
        }
        int RightOfWord = LeftOfWord;
        while (RightOfWord < n && S[RightOfWord] != ' ')
        {
            RightOfWord++;
        }

        for (int i = RightOfWord - 1; i >= LeftOfWord; i--)
        {
            cout << S[i];
        }

        LeftOfWord = RightOfWord;
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