#include<iostream>
#include"Student.h"
#include"ClassSystem.h"
using namespace std;
Student ClassSystem::getStudentByName(string n){
    int s=0;
    for(int i=0;i<=num-1;i++)
        if(names[i]==n)s=i;
    Student stu(n,times[s],abtimes[s]);
    return stu;
}