// Найти число элементов, равных числу X, расположенных 
// во второй половине (включая середину) массива целых чисел.
#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	cout << "Введите число X: ";
	cin >> x;

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
  for (int i=size/2; i<size; i++)
    if (massive[i] == x)
      result++;

  cout << "Число элементов, равных числу " << x << ": " << result << endl;
  return 0;
}

