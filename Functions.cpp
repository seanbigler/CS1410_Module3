#include <iostream>
using namespace std;

// TASK: define a function Arithmetic() that takes two
// floats as input parameters, and it displays
// their sum, difference, and product.
// Function prototype
void Arithmetic(float f1, float f2);
// Main function
int main()
{
    float f1IN = 0;
    float f2IN = 0;
    char answer;

    while (1)   // Run forever
    {
        cout << "Enter two numbers:" << endl;
        cin >> f1IN >> f2IN;

        Arithmetic(f1IN, f2IN);

        cout << "Continue? (y/n)" << endl;
        cin >> answer;
        if(answer == 'n')
        {
            break;
        }
    }
    return 0;
}

//Function definition
void Arithmetic(float f1, float f2)
{
    cout << "Sum of " << f1 << " and " << f2 << " = " << f1+f2 << endl;
    cout << "Difference of " << f1 << " and " << f2 << " = " << f1-f2 << endl;
    cout << "Product of " << f1 << " and " << f2 << " = " << f1*f2 << endl;

    return; //Optional
}
