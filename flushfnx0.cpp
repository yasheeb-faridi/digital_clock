// C++ program to demonstrate the use of "Flush" function
#include <iostream>
#include <thread>
#include <unistd.h>
using namespace std;
int main(){            
    for( int i = 0; i < 10; ++i)
    {
        cout << i << " ";
        sleep(1);
    }
    cout << endl;  // this function first waited for 10 seconds 
    return 0;      // and then printed out all the output at once
}