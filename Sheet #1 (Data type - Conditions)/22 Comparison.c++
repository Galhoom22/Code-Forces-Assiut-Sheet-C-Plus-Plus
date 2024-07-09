// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    char ope = '>';
    cin >> n1 >> ope >> n2;
    if(ope == '>'){
        if(n1 > n2){
            cout << "Right";
        }
        else
            cout << "Wrong";
    }

    else if(ope == '<'){
        if(n1 < n2){
            cout << "Right";
        }
        else
            cout << "Wrong";
    }

    else if(ope == '='){
        if(n1 == n2){
            cout << "Right";
        }
        else
            cout << "Wrong";
    }
    return 0;
}