// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D
#include <iostream>
using namespace std;

int main(){
    long long n1 , n2 , n3 , n4 , result;
    cin >> n1 >> n2 >> n3 >> n4;
    result = (n1 * n2) - (n3 * n4);
    cout << "Difference = " << result;
    return 0;
}