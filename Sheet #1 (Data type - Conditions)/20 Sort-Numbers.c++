// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T
#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3,max,min,avg;
    cin >> n1 >> n2 >> n3;
    if(n1 >= n2 && n1 >= n3) {// n1 max
        max = n1;
        if(n2 >= n3) {
            avg = n2;
            min = n3;
        }
        else if(n3 >= n2){
            avg = n3;
            min = n2;
        }
    }

    else if(n2 >= n1 && n2 >= n3) {// n2 max
        max = n2;
        if(n1 >= n3) {
            avg = n1;
            min = n3;
        }
        else if(n3 >= n1){
            avg = n3;
            min = n1;
        }
    }

    else if(n3 >= n1 && n3 >= n2) {// n3 max
        max = n3;
        if(n1 >= n2) {
            avg = n1;
            min = n2;
        }
        else if(n2 >= n1){
            avg = n2;
            min = n1;
        }
    }

    cout << min << endl << avg << endl << max << endl << endl << n1 << endl 
    << n2 << endl << n3 << endl;
    return 0;
}