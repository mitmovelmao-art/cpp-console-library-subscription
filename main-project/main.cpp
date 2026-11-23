#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

#include "conference_program.h"
#include "file_reader.h"
#include "constants.h"

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    cout << "Лабораторная работа №8. GIT\n";
    cout << "Вариант №2. Программа конференции\n";
    cout << "Автор: Дмитрий Сафроненко\n\n";
    Report* reports[MAX_FILE_ROWS_COUNT];
    int size;
    try
    {
        read("data.txt", reports, size);
        cout << "***** Программа конференции *****\n\n";
        for (int i = 0; i < size; i++)
        {
            /********** вывод времени **********/
            cout << "Время...........: ";
            cout << setw(2) << setfill('0') << reports[i]->start.hour << ':';
            cout << setw(2) << setfill('0') << reports[i]->start.minute << " - ";
            cout << setw(2) << setfill('0') << reports[i]->end.hour << ':';
            cout << setw(2) << setfill('0') << reports[i]->end.minute;
            cout << '\n';
            /********** вывод автора **********/
            cout << "Автор...........: ";
            cout << reports[i]->author.last_name << " ";
            cout << reports[i]->author.first_name << " ";
            cout << reports[i]->author.middle_name;
            cout << '\n';
            /********** вывод темы доклада **********/
            cout << "Тема доклада....: ";
            cout << '"' << reports[i]->topic << '"';
            cout << '\n';
            cout << '\n';
        }
        for (int i = 0; i < size; i++)
        {
            delete reports[i];
        }
    }
    catch (const char* error)
    {
        cout << error << '\n';
    }
    return 0;
}
