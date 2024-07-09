// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/R
#include <iostream>
using namespace std;

int main()
{
    int num , years , month , Remaining_days;
    cin >> num;
    years = num / 365;
    Remaining_days = num % 365;
    month = Remaining_days / 30;
    Remaining_days %= 30;
    
    cout << years << " years\n";
    cout << month << " months\n";
    cout << Remaining_days << " days\n";
    return 0;
}