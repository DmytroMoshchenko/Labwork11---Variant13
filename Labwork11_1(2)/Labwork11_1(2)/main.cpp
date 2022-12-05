#include <iostream>
void Task1();
void Task2();
void Task3();
int gcd(int a, int b);
int main() {
    // Отримати вибір користувача.
    int choice;
    std::cout << "Enter 1, 2, or 3: ";
    std::cin >> choice;
    // Виклик функції, яка відповідає вибору користувача.
    if (choice == 1)
        Task1();
    else if (choice == 2)
        Task2();
    else if (choice == 3)
        Task3();
    else
        std::cout << "That is not a valid choice.\n";
    return 0;
}

void Task1() {
    int n;
    int count = 0;
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] % 10 == 5 && arr[i + 1] % 10 == 5) {
            count++;
        }
    }
    std::cout << count;
    delete[] arr;
}



void Task2()
{
    int a;
    int b;
    int max = 0;
    int maxSum = 0;
    std::cin >> a >> b;
    for (int i = a; i <= b; i++) {
        int sum = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum > maxSum) {
            maxSum = sum;
            max = i;
        }
    }
    std::cout << max;
}



void Task3() {
    // Дано k натуральних чисел. Знайти їх найбільший спільний дільник, використовуючи алгоритм Евкліда і враховуючи, що НСД (a,b,c)=НСД(НСД(a,b),c).
    int n;
    int a;
    int b;
    int c;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a >> b >> c;
        int d = gcd(a, b);
        std::cout << gcd(d, c) << std::endl;
    }



}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}