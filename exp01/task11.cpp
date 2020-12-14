// Найти сумму абсолютных значений положительных 
// элементов массива и сумму абсолютных 
// значений отрицательных элементов массива.
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

  int positive = 0, negative = 0;
  for (int i=0; i<size; i++)
  {
    if (massive[i] > 0)
      positive += massive[i];
    else if (massive[i] < 0)
      negative += abs(massive[i]);
  }

  cout << "Сумма абсолютных значений положительных элементов: " << positive << endl;
  cout << "Сумма абсолютных значений отрицательных элементов: " << negative << endl;
  
  delete[] massive;
  return 0;
}
