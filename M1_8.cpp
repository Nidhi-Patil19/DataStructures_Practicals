#include <iostream>
using namespace std;

int main() {
    int A[4] = {1, 2, 3, 4};
    int B[4] = {5, 6, 7, 8};
    int sum[4];

    for (int i = 0; i < 4; i++) {
        sum[i] = A[i] + B[i];
    }

    cout << "Element-wise sum:\n";
    for (int i = 0; i < 4; i++) {
        cout << sum[i] << " ";
    }

    return 0;
}