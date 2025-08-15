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

void ShiftZeroes(vi &A, int N)
{
    int j = 0;
    for (int i = 0; i < N; ++i)
    {
        if (A[i] != 0)
        {
            A[j++] = A[i];
        }
    }
    while (j < N)
    {
        A[j++] = 0;
    }
    cout << A;
}

void Aliology()
{
    int N;
    cin >> N;

    vi A(N);
    cin >> A;
    ShiftZeroes(A, N);
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