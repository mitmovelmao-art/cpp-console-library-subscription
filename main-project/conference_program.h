#ifndef CONFERENCE_PROGRAM_H
#define CONFERENCE_PROGRAM_H

#include "constants.h"

struct Time
{
    int hour;
    int minute;
};

struct Author
{
    char last_name[MAX_STRING_SIZE];
    char first_name[MAX_STRING_SIZE];
    char middle_name[MAX_STRING_SIZE];
};

struct Report
{
    Time start;
    Time end;
    Author author;
    char topic[MAX_STRING_SIZE];
};

#endif
