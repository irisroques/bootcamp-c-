// pinetree

#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main(){

    int height, spaces, hashes, strumps;

    cout << "Whats the tree height ?";
    cin >> height;

    spaces = height - 1;
    hashes = 1;
    strumps = height - 1;

    while(height != 0){
        for(int k = 0; k < spaces; ++k){
            cout << " ";
        }
        for(int l = 0; l < hashes; ++l){
            cout << "#";
        }
        cout << "\n";
        spaces -= 1;
        hashes += 2;
        height -= 1;
    }

    for(int m = 0; m < strumps; ++m){
         cout << " ";
    }

    cout << "#" << endl;


    return 0;
}
