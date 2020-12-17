#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << "nod = " << i;
            break;
        }
    }
    return 0;