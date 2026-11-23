#include <iostream>
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
    cout << "Автор: Сафроненко Дмитрий\n\n";
    Report* reports[MAX_FILE_ROWS_COUNT];
    int size;
    try
    {
        read("data.txt", reports, size);
        for (int i = 0; i < size; i++)
        {
            cout << reports[i]->start.hour << ':' << reports[i]->start.minute << '\n';
            cout << reports[i]->end.hour << ':' << reports[i]->end.minute << '\n';
            cout << reports[i]->author.last_name << '\n';
            cout << reports[i]->author.first_name << '\n';
            cout << reports[i]->author.middle_name << '\n';
            cout << reports[i]->topic << '\n';
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
