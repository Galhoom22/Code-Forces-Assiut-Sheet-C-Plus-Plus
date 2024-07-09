// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F
#include <iostream>
using namespace std;

int main(){
    long long n1 , n2 , sum1 , sum2;
    cin >> n1 >> n2;
    sum1 = n1 % 10 ;
    sum2 = n2 % 10 ;
    cout << sum1 + sum2;
    return 0;
}
