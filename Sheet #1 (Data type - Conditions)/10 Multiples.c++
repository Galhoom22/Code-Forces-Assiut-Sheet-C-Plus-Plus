// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J
#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    cin >> num1 >> num2;
    if(num1 % num2 == 0 || num2 % num1 == 0){
        cout << "Multiples";
    }
    else 
        cout << "No Multiples";
    return 0;
}