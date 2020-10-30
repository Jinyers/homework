// Найти произведение элементов массива, абсолютное
// значение которых является простым числом.
#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int x)
{
  if (x >= 0 && x<4)
    return true;

  for (int i=2; i <= x/2; i++)
    if (x%i == 0)
      return false;
  return true;
}

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
    if (isPrime( abs(massive[i]) ))
      result *= massive[i];

  cout << "Произведение элементов массива: " << result << endl;
}
