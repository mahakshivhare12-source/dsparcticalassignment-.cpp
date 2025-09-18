#include <iostream>
using namespace std;

int main() {
    int a[5] = {1,2,3,4,5}, b[5] = {5,4,3,2,1}, sum[5];
    for (int i = 0; i < 5; i++) sum[i] = a[i] + b[i];

    cout << "Result: ";
    for (int i = 0; i < 5; i++) cout << sum[i] << " ";
}
