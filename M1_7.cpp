#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 20, 30, 40, 50, 60};

    cout << "Reversed array:\n";
    for (int i = 5; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}