// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
#include <iostream>
using namespace std;

int main()
{
    long long n1,n2,n3;
    char ope , equ;
    cin >> n1 >> ope >> n2 >> equ >> n3;

    if(ope == '+'){
        if(n1 + n2 == n3){
            cout << "Yes";
        }
        else 
            cout << n1 + n2;
    }

    else if(ope == '-'){
        if(n1 - n2 == n3){
            cout << "Yes";
        }
        else 
            cout << n1 - n2;
    }

    else if(ope == '*'){
        if(n1 * n2 == n3){
            cout << "Yes";
        }
        else 
            cout << n1 * n2;
    }


    return 0;
}