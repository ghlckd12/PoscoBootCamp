#pragma once

#include <string>

using namespace std;

#ifndef _MY_ADD_
#define _MY_ADD_

void inputStudentInfo(int numStudent, string** studentArr);
void printStudentInfo(int numStudent, string** studentArr);
void printAvgAge(int numStudent, string** studentArr);
void printEarlistBirth(int numStudent, string** studentArr);

#endif // !_MY_ADD_