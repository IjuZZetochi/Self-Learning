#include <bits/stdc++.h>

using namespace std;

int n;

int main()
{
    cout << "Input the nth number of Fibonacci sequence: "; cin >> n;
    cout << "Result: ";
    if (n <= 1) cout << n;
    else {
        int a = 0, b = 1, c;
        for (int i = 2; i <= n; ++i)
            c = a + b, a = b, b = c;
        cout << c;
    }
}