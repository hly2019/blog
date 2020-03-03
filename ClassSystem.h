#ifndef cs_
#define cs_
class ClassSystem{
    public:
        int num;//记录学生的数量，方便存到数组当中。
        int classnumber;//已经上了的课次
        void addStudent(Student& stu);//将student的name存入两个数组当中
        void addClassNumber();//每调用一次就让classnumber++；
        void signIn(string);//输入name后找到对应的times数组的元素，其值++；
        Student getStudentById(int);//输入id，即编号，返回一个student对象，将这个学生的出席次数和名字输入好
        Student getStudentByName(string);//输入名字，然后返回一个student对象，将这个学生的学号和出席次数输入好
        int times[1000];//同学的出席次数；每个元素times[i]分别表示第i个同学出席的次数
        int abtimes[1000];//同学的缺席次数
        string names[1000];//记录每个同学的名字，与times恰好对应；
       /* int& operator[] (string n){
            for(int i=0;i<=num-1;i++){
                if(names[i]==n)return i;//有点问题;
            }
            
        } */
        
};


#endif