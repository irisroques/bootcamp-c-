// guessing game
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

int main(){

    srand(time(NULL));
    int secret = rand() % 13;
    int guess = 0;

    while(secret != guess){
        cout << "Guess the secret number : ";
        cin >> guess;

        if(guess > secret) cout << "Too big!!";
        if(guess < secret) cout << "Too small!!";
        cout << endl;
    }

    cout << "You guessed it! " << endl;

    return 0;
}
