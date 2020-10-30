// Найти номер и значение минимального положительного элемента,
// расположенного на нечетном месте в массиве целых чисел.
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

  int result = 0;
  int pos    = 0;
  for (int i=0; i< (size+1)/2; i++)
  {
    if (massive[i*2] < result || result==0 && massive[i*2] > 0)
    {
      result = massive[i*2];
      pos    = i*2;
    }
  }

  cout << "Минимальный положительный элемент: " << result << ". ";
  cout << "Позиция: " << ++pos << endl;

  return 0;
}
