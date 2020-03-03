all: main
main: main1.o addClassNumber.o getStudentById.o getStudentByName.o signIn.o addstudent.o Student.h ClassSystem.h
	g++ main1.o addClassNumber.o getStudentById.o getStudentByName.o signIn.o addstudent.o -o main
main1.o: main1.cpp  Student.h ClassSystem.h
	g++  -c main1.cpp -o main1.o
addClassNumber.o: addClassNumber.cpp  Student.h ClassSystem.h
	g++ -c addClassNumber.cpp -o addClassNumber.o
getStudentById.o: getStudentById.cpp  Student.h ClassSystem.h
	g++ -c getStudentById.cpp -o getStudentById.o
getStudentByName.o: getStudentByName.cpp  Student.h ClassSystem.h
	g++ -c getStudentByName.cpp -o getStudentByName.o
signIn.o: signIn.cpp  Student.h ClassSystem.h
	g++ -c signIn.cpp -o signIn.o
addstudent.o: addstudent.cpp  Student.h ClassSystem.h
	g++ -c addstudent.cpp -o addstudent.o
clean: 
	rm *.o main
