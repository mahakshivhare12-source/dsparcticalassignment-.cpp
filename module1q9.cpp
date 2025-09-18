#include <iostream>
using namespace std;

int main() {
    int a[5] = {1,2,3,4,5}, b[5];
    for (int i = 0; i < 5; i++) b[i] = a[i];

    cout << "Copied: ";
    for (int i = 0; i < 5; i++) cout << b[i] << " ";
}
