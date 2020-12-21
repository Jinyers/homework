// Дана строка символов, представляющая предложение,
// и строки, представляющие имя и отчество. 
// Поместить в строку предложение после имени отчество. 
// Имя может быть указано несколько раз.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    string name;
    // haha - Отчество :P
    string haha;

    cout << "Введите предложение: ";
    getline(cin, sentence);

    cout << "Введите имя: ";
    getline(cin, name);

    cout << "Введите отчество: ";
    getline(cin, haha);

    cout << "Результат: " << name + " " + haha << " " << sentence << endl;

    return 0;
}
