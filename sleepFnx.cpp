#include <iostream>
#include <unistd.h>   // to use sleep() function in Linux
using namespace std;
int main()
{
//The first cout statement is executed
cout<< "Learning sleep Fnx"<<"\n";
sleep(10);   //Then the sleep() function is called before executing the next cout statement

//this cout statement is executed after the sleep function is executed for the specifed  amount of time
cout<< "Waited 10 seconds";
cout<< endl;
return 0;
}