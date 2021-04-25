//This program determines whether or not a number is 'perfect'

#include <iostream>
using namespace std;

int isPerfect(int num)
{
    int sum1 = 0, i1 = 1;
    while (i1 < num)
    {
        if (num % i1 == 0) //Determines factors
            sum1 = sum1 + i1; //Add factors together
            i1++; //Increments index to check next factor
    }
    //Checks to see if sum of factors equals number
    if (sum1 == num)
    {
        //Output if number is perfect
        cout << num << " is a perfect number because\n";
        cout << num << " = ";

        //Prints factors
        for (int j = 1; j < num; j++)
        {
            if (num % j == 0) //Determines factors
            {
                cout << j << " + "; //Prints each factor followed by a '+ 'sign
            }
        }
        cout << "\b\b"; //Deletes last '+' sign
    }
    else
    {
        //Output if number is not perfect
        cout << num << " is not a perfect number";
    }
    return 0;
}

int main()
{
    int num;
    char list;

    cout << "This program determines whether or not a number is 'perfect'\n\n";
    cout << "Enter an integer: ";
    cin >> num;
    cout << "\n";

    cout << isPerfect(num);

    cout << "\b  \n\nDisplay all perfect numbers between 1 and 1,000? (Y or N): ";
    cin >> list;
    if (list == 'Y' || list == 'y')
    {
        for (int n = 1; n <= 1000; n++) //Loop to check all numbers 1 to 1,000
        {
            int sum2 = 0, i2 = 1;

            while (i2 < n)
            {
                if (n % i2 == 0) //Determines factors
                    sum2 = sum2 + i2; //Add factors together
                    i2++; //Increments index to check next factor
            }
            //Runs 'isPerfect' only if number is perfect
            if (sum2 == n)
            {
                cout << "\n";
                cout << isPerfect(n);
                cout << "\b\b  \n";
            }
        }
    }
    else if (list == 'N' || list == 'n')
    {
        cout << "\nGoodbye\n";
    }
    else
    {
        cout << "\nInvalid entry\n\nGoodbye\n";
    }
}