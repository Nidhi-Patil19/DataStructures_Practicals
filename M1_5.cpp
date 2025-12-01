#include <iostream>
using namespace std;

int main() {
    int arr[8] = {3, 6, 9, 12, 15, 18, 21, 24};
    int even = 0, odd = 0;

    for (int i = 0; i < 8; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even numbers: " << even << "\nOdd numbers: " << odd << endl;

    return 0;
}