#include <iostream>
using namespace std;

int main() {
    int arr[5] = {2, 4, 6, 8, 10}, sum = 0;
    for (int i = 0; i < 5; i++) sum += arr[i];
    cout << "Sum = " << sum;
    return 0;
}

