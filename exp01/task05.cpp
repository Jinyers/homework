#include <iostream>

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
  
  int sum = 0;
  for(int i=size/2; i<size; i++)
    if (massive[i] < 0)
      sum += massive[i];

  cout << "Сумма отрицательных элементов: " << sum << endl;
  return 0;
}
