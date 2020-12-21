// Дана строка символов. Выделить и вывести слова, ограниченные пробелом 
// или знаками препинания: запятая, точка, двоеточие, точка с запятой.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    string delimiters = " .,:;";

    cout << "Введите строку: ";
    getline(cin, str);

    int    lines = 0;
    string line  = "";

    for (int i=0; i<str.length(); i++)
    {
        bool isDelimiter = false;
        for (int j=0; j<delimiters.length(); j++)
            if (str[i] == delimiters[j])
                isDelimiter = true;

        if (isDelimiter && line.length() == 0)
            continue;

        if (isDelimiter)
        {
            cout << ++lines << " " << line << endl;
            line = "";
        }
        else
        {
            line += str[i];
        }
    }
    cout << ++lines << " " << line << endl;

    return 0;
}
