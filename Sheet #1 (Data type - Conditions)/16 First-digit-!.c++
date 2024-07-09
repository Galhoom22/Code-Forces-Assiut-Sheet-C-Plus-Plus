// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P
#include <iostream>
using namespace std;

int main()
{
    int num , mod;
    cin >> num;
    mod = num / 1000;
    if(mod % 2 == 0){
        cout << "EVEN";
    }
    else 
        cout << "ODD";
    return 0;
}