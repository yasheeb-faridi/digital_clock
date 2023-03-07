// C++ program to demonstrate the use of "Flush" function
#include <iostream>
#include <thread>
#include <unistd.h>
#include <chrono>
using namespace std;
int main(){            
    cout << "Hello, I am waiting....." << endl;
    this_thread::sleep_for(chrono::seconds(10));
    cout << "Waited 10s" << endl; 
    return 0;      
}