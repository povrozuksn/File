#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string str;
    string text_question;
    ifstream file("Вопросы.txt");

    while(file.good())
    {
        getline(file, str);
        int pos1 = str.find(",");
        text_question = str.substr(0, pos1);


        cout << str << endl;
        cout << pos1 << endl;
        cout << text_question << endl;
    }

    return 0;
}
