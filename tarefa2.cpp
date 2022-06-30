/***
Determine School Grade. If 5 "go to kindergarten". 6 - 17 go to grades 1 - 12.
>17 go to college
< 5 too young for school
***/

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(){

    string sAge = "0";
    cout << "Enter age : ";
    cin >> sAge;

    int nAge = stoi(sAge);

    if (nAge == 5){
        cout << "Go to kindergarten";
    } else if (nAge < 5) {
        cout << "Too young for school";
    } else if (nAge > 17) {
        cout << "Go to college";
    } else if((nAge >= 6) && (nAge <= 17)){
        switch(nAge){
            case 6:
                cout << "Go to grade 1";
                break;
            case 7:
                cout << "Go to grade 2";
                break;
            case 8:
                cout << "Go to grade 3";
                break;
            case 9:
                cout << "Go to grade 4";
                break;
            case 10:
                cout << "Go to grade 5";
                break;
            case 11:
                cout << "Go to grade 6";
                break;
            case 12:
                cout << "Go to grade 7";
                break;
            case 13:
                cout << "Go to grade 8";
                break;
            case 14:
                cout << "Go to grade 9";
                break;
            case 15:
                cout << "Go to grade 10";
                break;
            case 16:
                cout << "Go to grade 11";
                break;
            case 17:
                cout << "Go to grade 12";
                break;
        }
    }

    return 0;
}