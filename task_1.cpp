#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main ()
{
    srand ((unsigned int)time(NULL));
    int number = (rand()%100) +1;
    int guess =0;

    do{
        cout<<"Enter Guess (1-100): ";
        cin>>guess;
        else if(guess>number)
        cout<<"Guess lower!" << endl;
        else else if(guess<number)
        cout<<"Guess Higher!" <<endl;
        else
        cout<<"You Won!" <<endl;

    } while(guess!=number);
    return 0;
}