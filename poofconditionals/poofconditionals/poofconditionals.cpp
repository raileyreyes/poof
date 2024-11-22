// poofconditionals.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

    /*
       Cases
       - camelCase
           - camelLongerNameCase
       - snake_Camel_Case
       - PascalCase
           - PascalLongerNameCase
       - Snake_Pascal_Case
       - snake_lower_case
       - SNAKE_SCREAMING_CASE

       1. Naming Convention
           variable - camelCase (-10%)
           constant - SNAKE_SCREAMING_CASE (-10%)
           function - PascalCase (-10%)
       2. Naming should make sense & Use only global abbreviation (-10%)
       3. Code Construction (-2%)
           {
               constant variable
               variable

               code block
           }
       4. Refrain using Global Variable (automatic 0)
   */

   // Demo Project
   // Sari-Sari Store, User can select from all products they want to buy then total and pay it/kick out of the store
   // Topics Covered are Input, Output and Conditionals

#include <iostream>
    using namespace std;

    // Global variable sample: Global variable to set value as 5
    const int MAX_SELECTION = 5;
    int maxSelection = 5;
#define MaxSelection 5 

    int main()
    {
        int choice, payment, total = 0;

        cout << "Welcome to my store!\n"
            << "1. Zesto\n"
            << "2. Coke\n"
            << "3. Royal\n"
            << "Choose a number: ";
        cin >> choice;

        system("cls");

        switch (choice) {
        case 1:
            total = 12;
            cout << "Pay $" << total << '\n';
            break;
        case 2:
            total = 22;
            cout << "Pay $" << total << '\n';
            break;
        case 3:
            total = 22;
            cout << "Pay $" << total << '\n';
            break;
        default:
            cout << "Incorrect Input";
        }

        cout << "Input Payment: ";
        cin >> payment;

        total -= payment;

        if (0 < total)
        {
            cout << "Wala pang utang boss eh\n";
            exit(0);
        }
        else {
            if (0 > total)
            {
                cout << "Here's your change: " << total * -1 << "\n";
            }
            else {
                cout << "Payment Complete\n";
            }
        }

        cout << "Thank you and goodbye!\n\n\n";

        system("pause");
        return 0;
    



}
