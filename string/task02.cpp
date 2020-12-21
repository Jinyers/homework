// Дана строка символов. Преобразовать строку следующим образом: 
// заключить в одинарные кавычки(апострофы) слова, имеющие корень "удач",
// например, 'Удача', 'удачный'. 
// Слово ограничено пробелом, точкой или двоеточием.
#include <iostream>

using namespace std;

string getString(string str)
{
    string udach = "удач";
    string Udach = "УДАЧ";
    int pos = 0;

    bool isResult = false;

    for (int i=0; i<str.length(); i++)
    {
        if(str[i] == udach[pos] || str[i] == Udach[pos])
            pos++;

        if (pos > 3)
        {
            isResult = true;
            break;
        }
    }

    if (isResult)
        return "'" + str + "'";
    else
        return str;
}

int main()
{
    string str;
    string result = "";

    cout << "Введите строку: ";
    getline(cin, str);

    string tmp = "";
    for (unsigned i=0; i<str.length(); i++)
    {
        if (str[i] == ' ' || str[i] == ';' || str[i] == '.')
        {
            if (tmp.length() > 0)
            {
                result += getString(tmp);
                tmp = "";
            }
            result += str[i];
            continue;
        }

        tmp += str[i];
    }
    if(tmp.length() > 0)
        result += getString(tmp);
    
    cout << result << endl;

    return 0;
}
