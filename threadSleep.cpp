// C++ program to demonstrate the use of "Flush" function
#include <iostream>
#include <thread>
#include <unistd.h>
#include <chrono>
using namespace std;
int main(){            
    for( int i = 0; i < 10; ++i)
    {
        cout << i << " " << flush;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl; 
    return 0;      
}