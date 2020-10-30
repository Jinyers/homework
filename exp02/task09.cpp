// Найти два максимальных отрицательных элемента в массиве целых чисел.
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

  int max     = 0;
  int not_max = 0;

  for (int i=0; i<size; i++)
  {
    if ((massive[i] > not_max || not_max == 0) && massive[i] < 0)
    {
      if (massive[i] > max || max == 0)
      {
        not_max = max;
        max     = massive[i];
      }
      else
      {
        not_max = massive[i];
      }
    }
  }

  cout << "Максимальные отрицательные числа: " << max << ", " << not_max << endl;
  return 0;
}

