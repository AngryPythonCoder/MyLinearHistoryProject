#include <iostream>

using namespace std;

void fib(int n) {
    int last = 0, next = 1;

    cout << last << endl;
    if (n > 1) cout << next << endl;
    if (n > 2)
        for (int i = 3; i <= n; i++) {
            swap(last, next);
            next += last;

            cout << next << endl;
        }
}

int main() {
    cout << "Hello, World!" << endl;
    fib(10);

    return 0;
}