#include <iostream>

using namespace std;

int main()
{

    /// # "Is rain?"


//
//    int isRain;
//    cout << "Please select option (1 or 2): " << endl
//    << "1. It's raining." << endl
//    << "2. It's not raining." << endl;
//    cin >> isRain;
//
//    if (isRain == 1)
//    {
//        cout << "It's raining, you need to take an umbrella!!!" << endl;
//    }
//    else if (isRain == 2)
//    {
//        cout << "It's not raining, you don't need to take an umbrella!!!" << endl;
//    } else
//    {
//        cout << "Invalid option. Please try again!!!" << endl;
//
//    }




    /// ordinary switch case
//    int a;
//    cin >> a;
//
//    switch (a)
//    {
//    case 1:
//        cout << "You have entered the first option" << endl;
//        break;
//    case 2:
//        cout << "You have entered the second option" << endl;
//        break;
//
//    default:
//        cout << "This option does not exist" << endl;
//        break;
//    }

    /// odd or even (mini-program for calculating even and odd numbers)

//    int a;
//    cout << "Enter a number to determine even and odd: "; cin >> a;
//
//    if (a%2==0)
//    {
//        cout << "number " << a << "-is even" << endl;
//    } else
//    {
//        cout << "number " << a << "-is odd" << endl;
//    }



    /// mini programm to check whether the number is positive, negative or zero.

//    int a;
//    cout << "Enter a number to check whether the number is positive, negative or zero: "; cin >> a;
//    if (a>0)
//    {
//        cout << "number " << a << " is positive" << endl;
//    } else if (a==0)
//    {
//        cout << "Entered " << a << " is 0" << endl;
//    } else
//    {
//        cout << "number " << a << " is negative" << endl;
//    }



    /// Mini program to determine which of two numbers is greater or lesser
//
//    int a, b;
//    cout << "A mini program to determine which of the two numbers is greater or less" << endl << endl;
//    cout << "Enter the first number: "; cin >> a;
//    cout << "Enter the second number: "; cin >> b;
//    if (a>b)
//    {
//        cout << "number " << a << " more than a number " << b << endl;
//    } else if (a==b)
//    {
//        cout << "number " << a << " equal to the number " << b << endl;
//    } else
//    {
//        cout << "number " << a << " less than a number " << b << endl;
//    }




/// A mini program for determining the time of day

//    int a;
//    cout << "A mini program for determining the time of day" << endl << endl;
//
//    cout << "Enter a number from 1 to 24 (hours): "; cin >> a;
//
//    if (5 <= a && a <= 12)
//    {
//        cout << "It is morning" << endl;
//    } else if (13 <= a && a <= 18)
//    {
//        cout << "It is day" << endl;
//    } else
//    {
//        cout << "It is night" << endl;
//    }




/// Determining the type of triangle on the sides

//
//    double a, b, c;
//    cout << "Determining the type of triangle on the sides" << endl << endl;
//
//    cout << "The 1st side: ";
//    cin >> a;
//    cout << "The 2nd side: ";
//    cin >> b;
//    cout << "The 3rd side: ";
//    cin >> c;
//
//
//    if (a <= 0 || b <= 0 || c <= 0)
//    {
//        cout << "The sides of the triangle must be positive numbers." << endl;
//    }
//    else if (a + b <= c || a + c <= b || b + c <= a)
//    {
//        cout << "You can't make a triangle out of these sides." << endl;
//    }
//    else
//    {
//        if (a == b && b == c)
//        {
//            cout << "The triangle is equilateral." << endl;
//        }
//        else if (a == b || a == c || b == c)
//        {
//            cout << "The triangle is isosceles." << endl;
//        }
//        else
//        {
//            cout << "The triangle is versatile." << endl;
//        }
//    }




/// The Pythagorean Theorem

//
//    double a, b, c;
//    cout << "A mini program for checking for a right triangle according to the Pythagorean theorem" << endl;
//    cout << "The 1st side: ";
//    cin >> a;
//    cout << "The 2nd side: ";
//    cin >> b;
//    cout << "The 3rd side: ";
//    cin >> c;
//
//    if (a <= 0 || b <= 0 || c <= 0)
//    {
//        cout << "The sides of the triangle must be positive numbers." << endl;
//    }
//    else if (a + b <= c || a + c <= b || b + c <= a)
//    {
//        cout << "You can't make a triangle out of these sides." << endl;
//    }
//    else
//    {
//
//        if (a*a + b*b == c*c)
//        {
//            cout << "This is a right-angled triangle!!!" << endl;
//        }
//        else
//        {
//            cout << "It's not a right-angled triangle.!!!" << endl;
//        }
//
//    }





    /// Calculator with operation selection

//    cout << "Mini calculator with a choice of operations for two numbers" << endl;
//    double a, b;
//    char symbol;
//    cout << "enter the 1st number: ";
//    cin >> a;
//    cout << "enter the 2nd number: ";
//    cin >> b;
//    cout << "select one of the characters (+, -, /, *): ";
//    cin >> symbol;
//
//
//    switch (symbol)
//    {
//    case '+':
//    {
//        cout << "You have chosen addition: " << a << " + " << b << " = " << a+b << endl;
//    }
//    break;
//    case '-':
//    {
//        cout << "You have chosen subtraction: " << a << " - " << b << " = " << a-b << endl;
//    }
//    break;
//    case '*':
//    {
//        cout << "You have chosen multiplication: " << a << " * " << b << " = " << a*b << endl;
//    }
//    break;
//    case '/':
//    {
//        cout << "You have chosen the division: " << a << " / " << b << " = " << a/b << endl;
//    }
//    break;
//
//    default:
//    {
//        cout << "Such a symbol is missing!!!" << endl;
//    }
//    break;
//    }


/// Weekday

//    cout << "Day of the week" << endl;
//    int number;
//    cout << "Enter the number of the day of the week: " << endl
//         << "1. Monday" << endl
//         << "2. Tuesday" << endl
//         << "3. Среда" << endl
//         << "4. Thursday" << endl
//         << "5. Friday" << endl
//         << "6. Saturday" << endl
//         << "7. Sunday" << endl;
//
//    cout << endl;
//
//    cin >> number;
//
//    cout << endl;
//
//    switch (number)
//        {
//
//        case 1:
//        {
//            cout << "You have chosen Monday." << endl;
//        }
//        break;
//
//        case 2:
//        {
//            cout << "You have chosen Tuesday." << endl;
//        }
//        break;
//
//        case 3:
//        {
//            cout << "You have chosen Wednesday." << endl;
//        }
//        break;
//
//        case 4:
//        {
//            cout << "You have chosen Thursday." << endl;
//        }
//        break;
//
//        case 5:
//        {
//            cout << "You chose Friday." << endl;
//        }
//        break;
//
//        case 6:
//        {
//            cout << "You have chosen Saturday." << endl;
//        }
//        break;
//
//        case 7:
//        {
//            cout << "You have chosen Sunday." << endl;
//        }
//        break;
//
//        default:
//        {
//            cout << "There is no such day of the week number!" << endl;
//        }
//        break;
//        }



    /// A mini program to identify mobile operators.

//        int numbers;
//        cout << "Enter your number (991112233): "; cin >> numbers;
//
//        int code = numbers / 10000000; // to sort only the code of mobile operators.
//
//
//        if (code == 77 || code == 95 || code == 99)
//        {
//            cout << "Your mobile operator: UZMOBILE" << endl;
//        } else if(code == 90 || code == 91 || code == 20)
//        {
//            cout << "Your mobile operator: Beeline" << endl;
//        }else if(code == 98)
//        {
//            cout << "Your mobile operator: PERFECTUM MOBILE" << endl;
//        } else if(code == 93 || code == 94 || code == 50)
//        {
//            cout << "Your mobile operator: Ucell" << endl;
//        } else if(code == 88 || code == 97)
//        {
//            cout << "Your mobile operator: Mobiuz" << endl;
//        } else {
//            cout << "Impossible to determine. Repeat again!" << endl;
//
//        }


















/// Calculator for converting from MB to other units.

//    cout << "Calculator for converting from MB to other units" << endl;
//    int a, b;
//
//    cout << "Convert Megabytes to (1-4): " << endl
//
//    << "1. Kilobyte(KB)" << endl
//    << "2. Gigabyte(GB)" << endl
//    << "3. Terabyte(TB)" << endl
//    << "4. Petabyte(PB)" << endl;
//
//    cin >> a;
//    cout << "Number of Megabytes: ";
//    cin >> b;
//
//    switch(a)
//    {
//    case 1:
//        {
//            cout << "You have chosen to convert from MB to KB: " << b << " MB is " << b*1024 << " KB" << endl;
//         }
//        break;
//
//
//    case 2:
//        {
//            cout << "You have chosen to convert from MB to GB: " << b << " MB is " << b/1024 << " GB" << endl;
//        }
//        break;
//
//
//    case 3:
//        {
//            cout << "You have chosen to convert from MB to TB: " << b << " MB is " << b/1024/1024 << " TB" << endl;
//        }
//        break;
//
//
//    case 4:
//        {
//            cout << "You have chosen to convert from MB to PB: " << b << " MB is " << b/1024/1024/1024 << " PB" << endl;
//        }
//        break;
//
//    default:
//        {
//            cout << "You chosen the wrong number!!!" << endl;
//        }
//        break;
//    }
//


    /// vertical or horizontal characters.


//    char symbol;
//    int symbolCount;
//    int symbolType;
//    int index = 0;
//
//
//    cout << "Enter the number of characters: "; cin >> symbolCount;
//
//
//    cout << "Enter a character: "; cin >> symbol;
//
//    cout << "Enter the character type: " << endl
//
//    << "1. Vertical" << endl
//    << "2. Horizontal" << endl;
//    cin >> symbolType;
//
//
//
//    while (index<symbolCount)
//    {
//        if(symbolType == 1)
//        {
//            cout << symbol << endl;
//        }
//
//        if(symbolType == 2)
//        {
//            cout << symbol;
//        }
//
//        index++;
//    }


    /// Number of digits

//    int n, result = 0;
//
//    cout << "Enter the number of numbers: "; cin >> n;
//
//    for (int i = 1; i <= n; i++)
//    {
//        int number;
//
//        cout << "Enter a number " << i << ": " ;
//        cin >> number;
//
//        result += number;
//    }
//
//
//    cout << "The sum of the numbers: " << result  << endl;







    return 0;
}
