#include <iostream>
#include <unistd.h>   // to use sleep function
#include <cstdlib>    // to use system functions
using namespace std;

int main(){            // C++ program for digital watch and set time.
    int hr, min, sec;
    cout << "Enter current hour: " << endl;    // this will also set the time for hr > 24
    cin >> hr;                                 // for that we have to put a conditional statement 
    cout << "Enter current minute: " << endl;
    cin >> min;
    cout << "Enter seconds: " << endl;
    cin >> sec;
    system("clear");

    while(true){
        system("clear");   // for clearing the console
        if(hr <= 12)
        cout << "A.M. ";
        else  
        cout << "P.M. ";
        cout << hr << " : " << min << " : " << sec << endl;
        sec++;             // created an infinite loop
            // if you put  system clear console in ths line you will be unable to see the time
                                // because the console will be cleared as soon as the time will show
        if(sec == 60){       // put on the conditions
            min++;
            sec = 0;
            if(min == 60){
                hr++;
                min = 0;
                if(hr == 24){   
                    hr = 0;     
                }               
            }
        }
        sleep(1); // The program will pause for 1 sec and then prints out the second
    }
    
    return 0;
}