#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter hash table size: ";
    cin >> size;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int hashTable[size];
    for (int i = 0; i < size; i++) hashTable[i] = -1;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int key;
        cin >> key;
        int index = key % size;
        hashTable[index] = key; // simple modulo hashing
    }

    cout << "Hash Table:\n";
    for (int i = 0; i < size; i++) {
        cout << i << " --> " << hashTable[i] << endl;
    }
    return 0;
}