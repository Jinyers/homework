// Найти среднее арифметическое значение для 
// положительных и отрицательных элементов массива.
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

  double pos    = 0,
         neg    = 0;
  int pos_count = 0,
      neg_count = 0;
  
  for (int i=0; i<size; i++)
  {
    if (massive[i] > 0)
    {
      pos_count++;
      pos += massive[i];
    }
    else if (massive[i] < 0)
    {
      neg_count++;
      neg += massive[i];
    }
  }

  pos /= pos_count;
  neg /= neg_count;

  cout << "Среднее арифметическое значение для положительных чисел: " << pos << endl;
  cout << "Среднее арифметическое значение для отрицательных чисел: " << neg << endl;

  return 0;
}

