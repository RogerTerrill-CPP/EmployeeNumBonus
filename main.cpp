#include <iostream>
using namespace std;

int main()
{
    //Declare and initialization of variables
    int id = 0;

    do
    {
        //Display user to enter id
        cout << "Please enter your 7 digit work id: ";

        //User inputs id number
        cin >> id;

        //Begin if statements for ID ranges
        if (id > 0 && id <= 2890980)
        {
            cout << "Your bonus will be $500" << endl;
        }
        else if (id >= 2890981 && id <= 4090929)
        {
            cout << "Your bonus will be $750" << endl;
        }
        else if (id >= 4090930 && id <= 9999999)
        {
            cout << "Your bonus will be $250" << endl;
        }
        else if (id >= 10000000)
        {
            cout << "Your ID is invalid" << endl;
        }
    //Verify that the id is a positive number and break if none positive
    }while (id > 0);

    //Display  a thank you message when done.
    cout << "Thank you for checking your bonus" << endl;
    return 0;
}

/*
Name        : homework4
Arguments   : int id
Return      : 0
Definition  : Show bonus for each ID inputed
*/
