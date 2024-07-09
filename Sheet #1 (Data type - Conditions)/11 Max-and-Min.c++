// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include <iostream>
using namespace std;

int main()
{
    int n1 , n2 , n3 , max , min;
    cin >> n1 >> n2 >> n3;
    if(n1 >= n2 && n1 >= n3){ // n1 max
        max = n1;

        if(n2 > n3){
            min = n3;
        }
        else 
            min = n2;
    }

    else if(n2 >= n1 && n2 >= n3){ // n2 max
        max = n2;

        if(n1 > n3){
            min = n3;
        }
        else 
            min = n1;
    }

    else if(n3 >= n1 && n3 >= n2){ // n3 max
        max = n3;

        if(n1 > n2){
            min = n2;
        }
        else 
            min = n1;
    }

    cout << min << " " << max;
    return 0;
}