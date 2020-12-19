#include <iostream>
#include <string>

using namespace std;

int main()
{
    string toModify;

    cout << "Введите строку, для редактирования: " << endl;
    getline(cin, toModify);

    string result   = "";
    char   lastChar = 0;
    for (int i=0; i<toModify.length(); i++)
    {
        if(!(toModify[i] == lastChar && lastChar == ' '))
            result += toModify[i];
        lastChar = toModify[i];
    }

    cout << "Результат: " << result << endl;
    return 0;
}
