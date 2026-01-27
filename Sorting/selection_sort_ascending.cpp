#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 1, 3, 2, 4};
    int n = 5;

    // Selection Sort - Descending
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
    }

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

