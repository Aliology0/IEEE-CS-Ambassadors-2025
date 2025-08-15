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
int getMax(vi &A)
{
    int max = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}
int getMin(vi &A)
{
    int min = INT_MAX;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    return min;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int countPrimes(vi &A)
{
    int count = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (isPrime(A[i]))
        {
            count++;
        }
    }
    return count;
}
bool isPalindrome(int num)
{
    string s = to_string(num);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int countPalindromes(vector<int> &A)
{
    int count = 0;
    for (int num : A)
    {
        if (isPalindrome(num))
            count++;
    }
    return count;
}

int getMaxDivisorsNumber(vi &A)
{
    // Annoying Logic
    return 0;
}

void Aliology()
{
    int N;
    cin >> N;
    vi A(N);
    cin >> A;

    cout << "The maximum number : " << getMax(A) << "\n";
    cout << "The minimum number : " << getMin(A) << "\n";
    cout << "The number of prime numbers : " << countPrimes(A) << "\n";
    cout << "The number of palindrome numbers : " << countPalindromes(A) << "\n";
    cout << "The number that has the maximum number of divisors : " << getMaxDivisorsNumber(A) << "\n";
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