// Найти сумму квадратов положительных элементов массива
// целых чисел, расположенных на четных позициях.
#include <iostream>
#include "math.h"

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

  int result = 0;
  for (int i=0; i<size; i++)
    if (massive[i] > 0 && (i+1)%2 == 0)
      result += pow(massive[i], 2);

  cout << "Сумма квадратов положительных элементов массива целых чисел, расположенных на четных позициях, равна: " << result << endl;

  return 0;
}
