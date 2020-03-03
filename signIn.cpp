#include<iostream>
#include"Student.h"
#include"ClassSystem.h"
using namespace std;
void ClassSystem::signIn(string n){
    for(int i=0;i<=num;i++){
        if(n==names[i]){
            times[i]++;
        }
    }
	for(int i=0;i<=num;i++){
		abtimes[i]=classnumber-times[i];
	}


}
