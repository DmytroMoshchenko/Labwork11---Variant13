#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cout << "Enter the " << i + 1 << " element of the array: ";
        std::cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    std::cout << "The number of elements equal to 0 is " << count << std::endl;

    int min = arr[0];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > min) {
            sum += arr[i];
        }
    }
    std::cout << "The sum of elements after the minimum element is " << sum << std::endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (abs(arr[j]) > abs(arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    std::cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    delete[] arr;
    return 0;
}