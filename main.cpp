#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string str;
    string text_question;
    string right_answer;
    string pic_answer1;
    string text_answer1;
    string pic_answer2;
    string text_answer2;
    string pic_answer3;
    string text_answer3;

    ifstream file("Вопросы.txt");

    while(file.good())
    {
        getline(file, str);

        int pos1 = str.find(",", 0);
        text_question = str.substr(0, pos1-0);

        int pos2 = str.find(",", pos1+1);
        right_answer = str.substr(pos1+1, pos2-(pos1+1));

        int pos3 = str.find(",", pos2+1);
        pic_answer1 = str.substr(pos2+1, pos3-(pos2+1));

        int pos4 = str.find(",", pos3+1);
        text_answer1 = str.substr(pos3+1, pos4-(pos3+1));

        int pos5 = str.find(",", pos4+1);
        pic_answer2 = str.substr(pos4+1, pos5-(pos4+1));

        int pos6 = str.find(",", pos5+1);
        text_answer2 = str.substr(pos5+1, pos6-(pos5+1));

        int pos7 = str.find(",", pos6+1);
        pic_answer3 = str.substr(pos6+1, pos7-(pos6+1));

        int pos8 = str.find(",", pos7+1);
        text_answer3 = str.substr(pos7+1, pos8-(pos7+1));


        cout << str << endl;
        cout << text_question << endl;
        cout << right_answer << endl;
        cout << pic_answer1 << endl;
        cout << text_answer1 << endl;
        cout << pic_answer2 << endl;
        cout << text_answer2 << endl;
        cout << pic_answer3 << endl;
        cout << text_answer3 << endl;
    }

    return 0;
}
