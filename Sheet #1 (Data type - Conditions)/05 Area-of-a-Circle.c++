// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const double PI = 3.141592653;
    double num , Area;
    cin >> num;
    Area = PI * num * num;
    cout << setprecision(9) << Area;
    return 0;
}