// lab_4.1.cpp
// < Бандрівський Денис Юрійович >
// Лабораторна робота № 4.1
// Цикли
// Варіант 1

#include <iostream>
using namespace std;

int main() {
    int k, N;
    double result = 0.0;

    cout << "Enter the lower bound (k): ";
    cin >> k;

    cout << "Enter the upper bound (N): ";
    cin >> N;

    // Using while loop
    int i = k;
    while (i <= N) {
        result += (1.0 * i * i) / (k * k + N * N);
        i++;
    }

    cout << "Sum using while loop: " << result << endl;

    result = 0.0; // Reset result

    // Using do-while loop
    i = k;
    do {
        result += (1.0 * i * i) / (k * k + N * N);
        i++;
    } while (i <= N);

    cout << "Sum using do-while loop: " << result << endl;

    result = 0.0; // Reset result

    // Using for loop (increasing)
    for (i = k; i <= N; i++) {
        result += (1.0 * i * i) / (k * k + N * N);
    }

    cout << "Sum using for loop (increasing): " << result << endl;

    result = 0.0; // Reset result

    // Using for loop (decreasing)
    for (i = N; i >= k; i--) {
        result += (1.0 * i * i) / (k * k + N * N);
    }

    cout << "Sum using for loop (decreasing): " << result << endl;

    return 0;
}
