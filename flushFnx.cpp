// C++ program to demonstrate the use of "Flush" function
#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;
int main(){
    for( int i = 0; i < 10; i++)
    {
        cout << i << "\n";
        cout.flush();
        sleep(2);
    }
    return 0;
}