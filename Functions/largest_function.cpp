#include <iostream>
using namespace std;
int largest(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

int main() {
    int arr[] = {3, 9, 1, 7};
    int n = 4;
    cout << largest(arr, n);
    return 0;
}
