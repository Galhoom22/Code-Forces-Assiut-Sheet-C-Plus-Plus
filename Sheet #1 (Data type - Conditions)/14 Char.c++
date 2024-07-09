// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N
// ASCII - Binary Character Table =>  http://sticksandstones.kstrom.com/appen.html

#include <iostream>
using namespace std;

int main()
{
    char CHAR = 'A';
    cin >> CHAR;
    if(CHAR >= 65 && CHAR <= 90){
        CHAR += 32;
    }
    else if(CHAR >= 97 && CHAR <= 122){
        CHAR -= 32;
    }
    cout << CHAR;
    return 0;
}