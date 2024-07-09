// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
// ASCII - Binary Character Table =>    http://sticksandstones.kstrom.com/appen.html
#include <iostream>
using namespace std;

int main()
{
    char CHAR = 'A';
    cin >> CHAR;
    if(CHAR >= 65 && CHAR <= 122){
        if(CHAR >= 65 && CHAR <= 90){
            cout << "ALPHA\nIS CAPITAL";
        }
        else if (CHAR >= 97 && CHAR <= 122){
            cout << "ALPHA\nIS SMALL";
        }
    }
    else {
        cout << "IS DIGIT";
    }
    return 0;
}