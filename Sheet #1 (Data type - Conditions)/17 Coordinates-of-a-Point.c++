// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q
#include <iostream>
using namespace std;

int main()
{
    float n1,n2;
    cin >> n1 >> n2;
    if(n1 > 0 && n2 > 0 ){
        cout << "Q1";
    }
    else if(n1 < 0 && n2 > 0){
        cout << "Q2";
    }
    else if(n1 < 0 && n2 < 0){
        cout << "Q3";
    }
    else if(n1 > 0 && n2 < 0){
        cout << "Q4";
    }
    else if(n1 == 0 && n2 == 0){
        cout << "Origem";
    }
    else if(n1 == 0){
        cout << "Eixo Y";
    }
    else if(n2 == 0){
        cout << "Eixo X";
    }
    return 0;
}