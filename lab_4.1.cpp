// lab_4.1.cpp
// < Бандрівський Денис Юрійович >
// Лабораторна робота № 4.1
// Цикли
// Варіант 1

#include <iostream>
using namespace std;

int main() {
    int k, N;
    double S = 0.0;

    cout << "Enter the lower bound (k): ";
    cin >> k;

    cout << "Enter the upper bound (N): ";
    cin >> N;

    // Using while loop
    int i = k;
    while (i <= N) {
        S += (1.0 * i * i) / (k * k + N * N);
        i++;
    }

    cout << "Sum using while loop: " << S << endl;

    S = 0.0; // Reset result

    // Using do-while loop
    i = k;
    do {
        S += (1.0 * i * i) / (k * k + N * N);
        i++;
    } while (i <= N);

    cout << "Sum using do-while loop: " << S << endl;

    S = 0.0; // Reset result

    // Using for loop (increasing)
    for (i = k; i <= N; i++) {
        S += (1.0 * i * i) / (k * k + N * N);
    }

    cout << "Sum using for loop (increasing): " << S << endl;

    S = 0.0; // Reset result

    // Using for loop (decreasing)
    for (i = N; i >= k; i--) {
        S += (1.0 * i * i) / (k * k + N * N);
    }

    cout << "Sum using for loop (decreasing): " << S << endl;

    return 0;
}
