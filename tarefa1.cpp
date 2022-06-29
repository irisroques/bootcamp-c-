#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(){

    string sInput("Enter miles : ");

    string sMiles;

    cout << sInput;

    cin >> sMiles;

    int nMiles = stoi(sMiles);

    float fKm = nMiles * 1.60934;

    printf("%d miles equals %.4f kilometers \n", nMiles, fKm);

    return 0;
}