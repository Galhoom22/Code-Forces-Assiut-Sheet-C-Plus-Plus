// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U
#include <iostream>
using namespace std;

int main()
{
    float num;
    cin >> num;
    int INT_part = num;
    float decimal_part = num - INT_part;
    if(decimal_part != 0){
        cout << "float " << INT_part << " " << decimal_part;
    }
    else 
        cout << "int " << INT_part;
    return 0;
}