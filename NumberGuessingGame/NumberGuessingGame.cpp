#include <iostream>
#include<stdlib.h>
using namespace std;


int main() {
    int randomNum = rand() % 100;
    bool guessed = false;
    int guessedNum = 0;

    while (!guessed)
    {
        cout << "Guess the number: ";

        if (!(cin >> guessedNum))
        {
            cout << "Please enter numbers only." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else if (randomNum - guessedNum > 0)
        {
            cout << "To low! please try again" << endl;
        }
        else if (randomNum - guessedNum < 0)
        {
            cout << "To high! please try again" << endl;
        }
        else if (randomNum - guessedNum == 0)
        {
            cout << "You guessed correctly, well done!" << endl;
            guessed = true;
        }
    }

    return 0;
}
