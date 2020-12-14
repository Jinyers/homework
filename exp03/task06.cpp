// Найти число элементов массива целых чисел, расположенных на четных позициях
// и равных заданному числу X.
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
    for (int i=0; i<size; i++)
    if (i%2==1 && massive[i]==x)
      result++;

    cout << "Элементов массива, расположенных на четных позициях "
      << "и равных числу X: " << result << endl;

    delete[] massive;
    return 0;
}
