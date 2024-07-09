// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O
#include <iostream>
using namespace std;

int main()
{
    long long n1 , n2;
    char ope = '+';
    cin >> n1 >> ope >> n2;
    if(ope == '+') {
        cout << n1 + n2;
    }
    else if(ope == '-'){
        cout << n1 - n2;
    }
    else if(ope == '*'){
        cout << n1 * n2;
    }
    else if(ope == '/'){
        if(n2 == 0){
            cout << "Error division / 0 !!!";
        }
        else 
            cout << n1 / n2;
    }
    return 0;
}