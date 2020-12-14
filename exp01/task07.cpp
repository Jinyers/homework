// Задача 7
// Найти среднее арифметическое значение квадратов элемента массива.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  unsigned int size = 0;
  cout << "Введите размер массива: ";
  cin >> size;

  int* massive = new int[size];
  for (int i=0; i<size; i++)
  {
    cout << "Введите значение " << i+1 << " элемента массива: ";
    cin >> massive[i];
  }

  double result = 0;
  for(int i=0; i<size; i++)
    result += pow(massive[i], 2);
  result /= size;

  delete[] massive;
  cout << "Среднее арифметическое значение квадратов элементов массива: " << result << endl;
  return 0;
}
