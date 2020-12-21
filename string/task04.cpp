// Отформатировать строку, разбив ее на подстроки, 
// максимальной длиной 20 символов и разделенные пробелами. 
// В начале подстрок пробелы удалить.
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int utf8_strlen(const string& str)
{
    int c,i,ix,q;
    for (q=0, i=0, ix=str.length(); i < ix; i++, q++)
    {
        c = (unsigned char) str[i];
        if      (c>=0   && c<=127) i+=0;
        else if ((c & 0xE0) == 0xC0) i+=1;
        else if ((c & 0xF0) == 0xE0) i+=2;
        else if ((c & 0xF8) == 0xF0) i+=3;
        //else if (($c & 0xFC) == 0xF8) i+=4; // 111110bb //byte 5, unnecessary in 4 byte UTF-8
        //else if (($c & 0xFE) == 0xFC) i+=5; // 1111110b //byte 6, unnecessary in 4 byte UTF-8
        else return 0;//invalid utf8
    }
    return q;
}

int main()
{
    string str;

    cout << "Введите текст: " << endl;
    getline(cin, str);
    
    // Разбиение строки на слова
    vector<string> words;
    
    size_t pos = 0;
    string token;
    
    while((pos = str.find(" ")) != string::npos)
    {
        token = str.substr(0, pos);
        words.push_back(token);
        
        str.erase(0, pos+1);
    }
    words.push_back(str);

    // Преобразование в строки
    vector<string> lines;
    string temp = "";

    for (int i=0; i<words.size(); i++)
    {
        if (utf8_strlen(temp) + utf8_strlen(words[i]) > 20)
        {
            lines.push_back(temp);
            temp = "";
        }

        temp += words[i] + " ";
    }

    // Вывод результата
    for (int i=0; i<lines.size(); i++)
        cout << i+1 << ". " << lines[i] << endl;

    return 0;
}
