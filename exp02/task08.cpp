// Найти два минимальных элемента в массиве целых чисел.
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

  int min     = 0;
  int not_min = 0;
  for (int i=0; i < size; i++)
  {
    if (massive[i] < not_min || not_min == 0)
    {
      if (massive[i] < min || min == 0)
      {
        not_min = min;
        min     = massive[i];
      }
      else
      {
        not_min = massive[i];
      }
    }
  }

  cout << "Минимальные значения: " << min << ", " << not_min << endl;
  return 0;
}

