#include "file_reader.h"
#include "constants.h"

#include <fstream>
#include <cstring>

Time convert(char* str)
{
    Time result;
    char* context = NULL;
    char* str_number = strtok_s(str, ":", &context);
    result.hour = atoi(str_number);
    str_number = strtok_s(NULL, ":", &context);
    result.minute = atoi(str_number);
    return result;
}

void read(const char* file_name, Report* array[], int& size)
{
    std::ifstream file(file_name);
    if (file.is_open())
    {
        size = 0;
        char tmp_buffer[MAX_STRING_SIZE];
        while (!file.eof())
        {
            Report* item = new Report;
            file >> tmp_buffer;
            if (file.fail())
            {
                delete item;
                break;
            }
            item->start = convert(tmp_buffer);
            file >> tmp_buffer;
            item->end = convert(tmp_buffer);
            file >> item->author.last_name;
            file >> item->author.first_name;
            file >> item->author.middle_name;
            file.read(tmp_buffer, 1); // чтение лишнего символа пробела
            file.getline(item->topic, MAX_STRING_SIZE);
            array[size++] = item;
        }
        file.close();
    }
    else
    {
        throw "Ошибка открытия файла";
    }
}
