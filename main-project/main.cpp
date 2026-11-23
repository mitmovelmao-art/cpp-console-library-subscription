#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

#include "conference_program.h"
#include "file_reader.h"
#include "constants.h"

using namespace std;

#include "conference_program.h"
#include "file_reader.h"
#include "constants.h"

int main()
{
<<<<<<< HEAD
    setlocale(LC_ALL, ".UTF8");
    cout << "������������ ������ �8. GIT\n";
    cout << "������� �2. ��������� �����������\n";
    cout << "�����: ���� ��� �������\n\n";
=======
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    cout << "Лабораторная работа №8. GIT\n";
    cout << "Вариант №2. Программа конференции\n";
    cout << "Автор: Дмитрий Сафроненко\n\n";
>>>>>>> dev
    Report* reports[MAX_FILE_ROWS_COUNT];
    int size;
    try
    {
        read("data.txt", reports, size);
<<<<<<< HEAD
        for (int i = 0; i < size; i++)
        {
            cout << reports[i]->start.hour << ':' << reports[i]->start.minute << '\n';
            cout << reports[i]->end.hour << ':' << reports[i]->end.minute << '\n';
            cout << reports[i]->author.last_name << '\n';
            cout << reports[i]->author.first_name << '\n';
            cout << reports[i]->author.middle_name << '\n';
            cout << reports[i]->topic << '\n';
=======
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
>>>>>>> dev
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
