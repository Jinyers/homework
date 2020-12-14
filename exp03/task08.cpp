// Дано: массив целых положительных чисел, значение которых не превышает
// числа 8. Определить сколько раз встречаются различные значения в массиве
#include <iostream>
#include <stdlib.h>

using namespace std;

struct variousElems
{
    int elem;
    int total;
};

class UniqueMassive
{
    private:
        int len = 0;
        variousElems* p_elems;
    public:
        ~UniqueMassive()
        {
            free(p_elems);
        }

        int Count()
        {
            return len;
        }

        void Print()
        {
            for (int i=0; i < len; i++)
            {
                cout << "Элемент " << p_elems[i].elem
                    << " встречался " << p_elems[i].total << " раз." << endl;
            }
        }

        int Add(int elem)
        {
           if (len > 0)
           {
               bool isUniq = true;
               for (int i=0; i<len; i++)
               {
                   if (p_elems[i].elem == elem)
                   {
                       isUniq = false;
                       p_elems[i].total++;

                       return 0;
                   }
               }

               if (isUniq)
               {
                   p_elems = (variousElems*) realloc(p_elems, ++len);

                   p_elems[len-1].elem  = elem;
                   p_elems[len-1].total = 1;
               }
           }
           else
           {
                p_elems = (variousElems*) malloc(++len);

                p_elems[len-1].elem  = elem;
                p_elems[len-1].total = 1;
           }
        return 1;
        }
};

int main()
{
    unsigned int size = 0;
    cout << "Введите размер массива: ";
    cin >> size;

    int* massive = new int[size];
    for (int i=0; i<size; i++)
    {
        int tmp=0;
        do
        {
            cout << "Введите " << i+1 << " положительный элемент массива, не привышающий число 8: ";
            cin >> tmp;
        } while(tmp < 0 || tmp > 8);

        massive[i] = tmp;
    }

    UniqueMassive uniqMassive;
    int totalUniq = 0;
    for (int i=0; i<size; i++)
        uniqMassive.Add( massive[i] );

    cout << "Всего уникальных элементов: " << uniqMassive.Count() << endl;
    uniqMassive.Print();

    delete[] massive;
    return 0;
}

