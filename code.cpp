#include <iostream>

using namespace std;

int fib(int n) {
    if (n > 2) return fib(n-1) + fib(n-2);
    else return n-1;
}

int main() {
    cout << "Hello, World!" << endl;
    cout << fib(10) << endl;

    return 0;
}