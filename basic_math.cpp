#include <bits/stdc++.h>

using namespace std;

int a, b;
char c;

int main()
{
    cout << "Input a: "; cin >> a;
    cout << "Input b: "; cin >> b;
    cout << "Choose [+, -, x, /]: "; cin >> c;
    cout << "Result: ";
    if (c == '+') cout << a + b; else
    if (c == '-') cout << a - b; else
    if (c == 'x') cout << a * b; else
    cout << (int) a / b;
    return 0;
}