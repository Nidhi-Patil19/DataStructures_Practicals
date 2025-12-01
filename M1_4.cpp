#include <iostream>
using namespace std;

int main() {
    int arr[6] = {12, 45, 7, 89, 23, 5};
    int max = arr[0], min = arr[0];

    for (int i = 1; i < 6; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }

    cout << "Maximum: " << max << "\nMinimum: " << min << endl;

    return 0;
}