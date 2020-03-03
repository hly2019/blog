#ifndef stu_
#define stu_
#include<fstream>
#include<iostream>
using namespace std;
class Student {
    public:
        string name;
        int pretimes;
        int abstimes;
        string getName(){
            return name;
        }
        int getPresentTimes(){
            return pretimes;
        }
        int getAbsentTimes(){
            return abstimes;
        }
        Student(string n,int m=0,int r=0){
            name=n;
            pretimes=m;
            abstimes=r;
        }
};
#endif
