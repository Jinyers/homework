// Найти максимальный положительный четный элемент массива целых чисел.
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
  for (int i=0; i<size; i++)
    if (massive[i] > result && massive[i]%2==0)
      result = massive[i];
  

  cout << "Максимальный положительный четный элемент: " << result << endl;
  return 0;
}

