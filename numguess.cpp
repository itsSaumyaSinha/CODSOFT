#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int random_num=0;
    int guess_num=0;
    char choice;
    int trials=0;
    srand(time(0));
    random_num=(rand()%100)+1;
    cout<<"do you want to begin with the game y or n\n";
    cin>>choice;


    while(choice=='y')
    {   char hint;
        ++trials;
    cout<<"user please enter your guessed number b/w 1 to 100 \n";
    cin>>guess_num;
    if(random_num==guess_num)
    {
        cout<<"BINGO!! YOU GUESSED RIGHT WITH "<<trials<<"TRIALS\n";
        cout<< "random_num="<<random_num<<"\tguessed_num="<<guess_num;
        break;
    }
    else
    {
        cout<<"do you wish to have a hint\n";
        cin>>hint;
        if(hint=='y')
        {
            if(random_num>guess_num)
            {
                cout<<"random_num is greater than your guessed_num\n";

            }
            else
            {
                cout<<"random_num is less than your guessed_num\n";

            }
        } 
        else
        {cout<<"BELIEVE IN YOURSELF\n";}
    }

    cout<<"Do you wish to continue with the guessing\n";
    cin>>choice;
    if(choice=='n')
    {   
        cout<<"YOU GAVE UP BETTER LUCK NEXT TIME\n";
        break;
    }
    }
   cout<<"\nENDED";
   return 0;

}