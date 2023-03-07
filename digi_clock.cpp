#include <iostream>
#include <unistd.h>   // to use sleep function
#include <cstdlib>    // to use system functions for linux
using namespace std;

// The infinte loop for this clock is
//    while (true){            
//     cout<< hr << " : " << min << " : " << sec << endl;
//     sec++
//    }


int main(){            // C++ program for digital watch
    int hr = 23, min = 59, sec = 50;
    while(true){
        system("clear");   // for clearing the console
        cout << "******************" << endl;               // for decoration 
        if(hr <= 12)
        cout << "A.M. ";
        else  
        cout << "P.M. ";
        cout << hr << " : " << min << " : " << sec << endl;
        cout << "******************" << endl;             // for decoration
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