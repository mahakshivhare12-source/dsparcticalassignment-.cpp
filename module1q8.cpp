#include <iostream>
using namespace std;

int main() {
    int arr[6] = {2,5,8,7,4,9}, even=0, odd=0;
    for (int i = 0; i < 6; i++) {
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    cout << "Even: " << even << ", Odd: " << odd;
}
