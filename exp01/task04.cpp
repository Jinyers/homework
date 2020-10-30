#include <iostream>

using namespace std;

bool isPrime(int x)
{
  if (x >= 0 && x<4)
    return true;

  for (int i=2; i <= x/2; i++)
    if (i%i == 0)
      return false;
  return true;
}

int main()
{
  int size = 0;
  cout << "Введите размер массива: ";
  cin >> size;

  int* massive = new int[size];
  
  for (int i=0; i<size; i++)
  {
    cout << "Введите " << i+1 << "-ный элемент: ";
    cin >> massive[i];
  }

  int sum = 0;
  for (int i=0; i<size; i++)
    if (isPrime( abs(massive[i]) ))
      sum += massive[i];
  cout << "Сумма элементов массива: " << sum << endl;

  return 0;
}
