// Найти минимальное абсолютное значение элемента массива целых чисел.
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
    if ( abs(massive[i])<result || result==0 )
      result = abs(massive[i]);

  cout << "Минимальное абсолютное значение: " << result << endl;

  return 0;
}
