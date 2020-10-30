// Найти число отрицательных элементов массива, квадрат которых больше числа X.
#include <iostream>
#include "math.h"

using namespace std;

int main()
{
	int x = 0;
	cout << "Введите число X: ";
	cin >> x;

  unsigned int size = 0;
  cout << "Введите размер массива: ";
  cin >> size;

  int* massive = new int[size];
  for (int i=0; i<size; i++)
  {
    cout << "Введите " << i+1 << " элемент массива: ";
    cin >> massive[i];
  }

  int result = 0;
  for (int i=0; i<size; i++)
    if (massive[i] < 0 && pow(massive[i], 2) > x)
      result++;

  cout << "Кол-во отрицательных элементов, квадрат которых больше числа " << x << ": " << result << endl;
  return 0;
}

