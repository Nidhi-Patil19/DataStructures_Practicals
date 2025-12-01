#include <iostream>
using namespace std;

int main() {
    int original[5] = {1, 2, 3, 4, 5};
    int copy[5];

    for (int i = 0; i < 5; i++) {
        copy[i] = original[i];
    }

    cout << "Copied array:\n";
    for (int i = 0; i < 5; i++) {
        cout << copy[i] << " ";
    }

    return 0;
}