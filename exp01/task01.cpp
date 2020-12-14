#include <iostream>
#include <math.h>

using namespace std;

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

  // Sum
  int sum = 0;
  for (int i=0; i<size; i++)
    if (massive[i] > 0)
      sum += pow(massive[i], 2);

  // End
  cout << "Сумма элементов: " << sum << endl;

  delete[] massive;
  return 0;
}
