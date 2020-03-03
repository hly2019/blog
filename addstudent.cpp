#include<iostream>
#include"Student.h"
#include"ClassSystem.h"
using namespace std;
void ClassSystem::addStudent(Student& stu){
    names[num]=stu.name;
    num++;
}