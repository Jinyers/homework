// Найти число положительных элементов массива 
// целых чисел, расположенных на нечетных позициях.
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
  for (int i=0; i < (size+1)/2; i++)
    if (massive[i*2] > 0)
      result++;

  cout << "Положительных элементов массива: " << result << endl;
  return 0;
}

