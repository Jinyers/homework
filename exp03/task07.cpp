// Найти число нечетных положительных, четных положительных, нечетных 
// отрицательных и четных отрицательных элементов массива целых чисел.
#include <iostream>

using namespace std;

int main()
{
    unsigned int size = 0;
    cout << "Введите размер массива: ";
    cin >> size;

    int* massive = new int[size];
    for (int i=0; i<size; i++)
    {
        cout << "Введите " << i+1 << " элемент массива: ";
        cin >> massive[i];
    }

    // Even = 0, 2, 4, 6...
    // Odd  = 1, 3, 5, 7...
    int positiveEven=0, positiveOdd=0;
    int negativeEven=0, negativeOdd=0;
    for (int i=0; i<size; i++)
    {
        if (massive[i] >= 0)
        {
            if (massive[i]%2 == 0)
                positiveEven++;
            else
                positiveOdd++;
        }
        else
        {
            if (massive[i]%2 == 0)
                negativeEven++;
            else
                negativeOdd++;
        }
    }

    cout << "Положительных четных чисел: " << positiveEven << endl;
    cout << "Положительных нечетных чисел: " << positiveOdd << endl;
    cout << "Отрицательных четных чисел: " << negativeEven << endl;
    cout << "Отрицательных нечетных чисел: " << negativeOdd << endl;

    delete[] massive;
    return 0;
}

