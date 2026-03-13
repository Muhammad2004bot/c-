#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "a ni kiriting: ";
    cin >> a;
    cout << "b ni kiriting: ";
    cin >> b;
    cout << "Operator (+ - * /): ";
    cin >> op;

    if(op == '+') cout << "Natija: " << a+b;
    else if(op == '-') cout << "Natija: " << a-b;
    else if(op == '*') cout << "Natija: " << a*b;
    else if(op == '/') cout << "Natija: " << a/b;
    else cout << "Noto‘g‘ri operator";

    return 0;
}
