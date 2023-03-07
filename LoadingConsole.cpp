#include <iostream>
#include <unistd.h>
using namespace std;

int main(){                 /// Loading...
    cout << "hp" << endl;
    sleep(3);
    cout << "Windows" << endl;
    sleep(2);
    system("clear");
    cout <<"Loading";
    cout <<"." << flush;   // need to use the flush function for this to work  
    sleep(1);
    cout <<"." << flush;     
    sleep(1);
    cout <<"." << flush;
    sleep(1);
    system("clear");
    cout << "Welcome" << endl;

    return 0;
}