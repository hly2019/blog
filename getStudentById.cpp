#include<iostream>
#include"Student.h"
#include"ClassSystem.h"
using namespace std;
Student ClassSystem::getStudentById(int n){
    Student stu(names[n],times[n],abtimes[n]);
    return stu;
}