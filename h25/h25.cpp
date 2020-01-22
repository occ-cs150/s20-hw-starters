/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file h25.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "sgilbert"; // "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h25.h"

// Add your code here

void reverse(char * s)
{
    char *end = s, *begin = s;
    while (*end) end++;
    end--;
    while (begin < end)
    {
        char temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}

const char * findStr(const char *str1, const char *str2)
{
//        return str1; // for errors

    if (*str2 == '\0') return str1;
    const char * result = nullptr;
    const char * beg = str1;
    while (*beg) {
        const char * p1 = str2;
        const char * p2 = beg;
        bool found = true;
        while (*p1 && *p2) {
            if (*p1 != *p2) {
                found = false;
                break;
            }
            p1++;
            p2++;
        }
        if (found) return beg;
        beg++;
    }
    return result;
}



//////////////////////// STUDENT TESTING //////////////////////////

int run()
{
    cout << "Add your own tests here" << endl;
    return 0;
}