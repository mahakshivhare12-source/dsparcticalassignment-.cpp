#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1,2,3,4,5};
    int n = 5, pos = 2, ele = 99;

    for (int i = n; i > pos; i--) arr[i] = arr[i-1];
    arr[pos] = ele;
    n++;

    cout << "After insertion: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}
