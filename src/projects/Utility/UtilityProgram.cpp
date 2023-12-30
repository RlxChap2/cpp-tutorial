#include <iostream>
using namespace std;

void FuncPlus(int number, int aNumber)
{
    cout << "Result: " << number << " + " << aNumber << " = " << number + aNumber << "\n";
}

void FuncMinus(int number, int aNumber)
{
    cout << "Result: " << number << " - " << aNumber << " = " << number - aNumber << "\n";
}

void multiplicationFunc(int number, int aNumber)
{
    cout << "Result: " << number << " * " << aNumber << " = " << number * aNumber << "\n";
}

void portionFunc(int number, int aNumber)

{
    if (aNumber != 0)
        cout << "Result: " << number << " / " << aNumber << " = " << number / aNumber << "\n";
    else
        cout << "Cannot divide by zero.\n";
}

void displayOptions()
{
    cout << "Choose Operation: \n";
    cout << "1. plus + \n";
    cout << "2. minus - \n";
    cout << "3. multiplication * \n";
    cout << "4. portion / \n";

    int choice;
    cout << "Enter the number of your choice: ";
    cin >> choice;

    int number;
    cout << "Enter the first number: ";
    cin >> number;

    int aNumber;
    cout << "Enter the second number: ";
    cin >> aNumber;

    switch (choice)
    {
    case 1:
        FuncPlus(number, aNumber);
        break;

    case 2:
        FuncMinus(number, aNumber);
        break;

    case 3:
        multiplicationFunc(number, aNumber);
        break;

    case 4:
        portionFunc(number, aNumber);
        break;

    default:
        cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
        displayOptions();
        break;
    }
}

int main()
{
    displayOptions();
    return 0;
}
