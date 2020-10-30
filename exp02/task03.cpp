// Найти номер и значение максмального элемнта, расположенного
// во второй половине (включая середину) массива целых чисел.
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
  int pos = 0;
  for (int i=size/2; i<size; i++)
  {
    if (massive[i] > result)
    {
      result = massive[i];
      pos = i;
    }
  }

  cout << "Максимальный элемент: " << result << ". Позиция: " << pos+1 << endl;
  
  return 0;
}
