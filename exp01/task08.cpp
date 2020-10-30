// Найти произведение элементов массива,
// значение которых равно их порядковому номеру.
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

  int result = 1;
  for (int i=0; i<size; i++)
    if (massive[i] == i)
      result *= i;

  cout << "Произведение элементов массива: " << result << endl;
}
