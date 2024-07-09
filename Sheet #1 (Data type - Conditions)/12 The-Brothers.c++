// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L
#include <iostream>
using namespace std;

int main()
{
    string person1_name , person1_dad , person2_name , person2_dad;
    cin >> person1_name >> person1_dad >> person2_name >> person2_dad;
    if(person1_dad == person2_dad){
        cout << "ARE Brothers";
    }
    else 
        cout << "NOT";
    return 0;
}