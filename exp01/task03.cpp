#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int x = 0;
  cout << "Введите X: ";
  cin >> x;

  int size = 0;
  cout << "Введите размер массива: ";
  cin >> size;

  int* massive = new int[size];
  
  for (int i=0; i<size; i++)
  {
    cout << "Введите " << i+1 << "-ный элемент: ";
    cin >> massive[i];
  }

  // Sum
  int sum = 0;
  for (int i=0; i<size; i++)
  {
    if (massive[i] < 0 && pow(massive[i], 2) > x)
      sum += massive[i];
  }
  // End
  cout << "Сумма элементов: " << sum << endl;

  delete[] massive;

  return 0;
}

