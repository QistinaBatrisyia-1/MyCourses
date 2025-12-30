/*Topic Week 12
Input & Output Chapter 6*/
#include <iostream>
#include <iomanip>//header file for setw(aka. set width)--manipulator for text width
using namespace std;
int main()
{
//Output Formatting Examples


    //using set width manipulator ---setw(n) sets the width of the next item to n spaces
cout << "*" << -17 << "*" << endl;
cout << "*" << setw(6) << -17 << "*" << endl << endl;//setw sets the width of the next item only
cout << "*" << "Hi there!" << "*" << endl;
cout << "*" << setw(20) << "Hi there!" << "*" << endl;//text aligned to the right by default
cout << "*" << setw(3) << "Hi there!" << "*" << endl;//if the width is smaller than the text,
// the width is ignored---automatic expansion
 
    //using left and right manipulators
int x = 15;
int y = 7634;
cout << left;//manipulator for left alignment --affects all subsequent output
cout << setw(5) << x << setw(7) << y << setw(8) << "Warm"//text aligned to the left
<< endl;
cout << right;
cout << setw(5) << x << setw(7) << y << setw(8) << "Warm"<<endl;//text aligned to the right

    //using fixed --uses iostream header file,not necessary to include iomanip
    double k = 15.674;
    double l= 235.73;
    double z = 9525.9874;
    //cout << fixed;---enables fixed point notation for all subsequent floating point output
    cout << k << endl << l << endl << z << endl;


    //using fixed for floating point numbers
    float small = 3.1415926535897932384626;
    float large = 6.0234567e17;
    float whole = 2.000000000;
    cout << "Some values in general format" << endl;
    cout << "small: " << small << endl;
    cout << "large: " << large << endl;
    cout << "whole: " << whole << endl << endl;
    //cout << fixed;
    cout << "The same values in fixed format" << endl;
    cout << "small: " << small << endl;
    cout << "large: " << large << endl;
    cout << "whole: " << whole << endl << endl;

    //using showpoint manipulator --forces the output to show the decimal point and trailing zeros
    double a = 15.674;//double holds 6 to 15 significant digits,thus shows 6 digits by default
    double b = 235.73;
    double c = 9525.9874;
    //cout << showpoint;
    cout << a << endl << b << endl << c<< endl;

    //example showpoint 2
    float lots = 3.1415926535, little1 = 2.25;
    float little2 = 1.5, whole2 = 4.00000;
    cout << "Some values with noshowpoint (the default)" << endl;
    cout << "lots: " << lots << endl;
    cout << "little1: " << little1 << endl;
    cout << "little2: " << little2 << endl;
    cout << "whole: " << whole2 << endl << endl;
    cout << "The same values with showpoint" << endl;
    //cout << showpoint;
    cout << "lots: " << lots << endl;
    cout << "little1: " << little1 << endl;
    cout << "little2: " << little2 << endl;
    cout << "whole: " << whole2 << endl;

    //uisng both fix and showpoint manipulators
    double m = 15.674;
    double n = 235.73;
    double v = 9525.9874;
    //cout << fixed << showpoint;--to not disturb next example
    //cout << m << endl << n << endl << v << endl;
    //the output shows decimal point and trailing zeros up to 6 decimal places by default,
    //does not show the operand in scientific notation

    //using setprecision manipulator --sets the number of significant digits or decimal places
    //without fixed manipulator
    double d = 15.674;
    double e = 235.73;
    double f = 9525.9874;
    //cout << setprecision(2);
    cout << d << endl << e << endl << f << endl;

    //setprecision with fixed manipulator --no scientific notation,sets number of decimal places
    double g = 156.74, h = 235.765, i = 9525.9874;
    cout << setprecision(5) << g << endl;
    cout << setprecision(3) << g << endl;
    cout << setprecision(2) << g << endl;
    cout << setprecision(1) << g << endl;
    cout << fixed << setprecision(2);
    cout << g << endl << h << endl << z << endl;

//Input Formatting Examples

//using setw manipulator for input
    const int SIZE = 10;
    char firstName[SIZE];
    cout << "Enter your name: ";
    cin >> setw(SIZE) >> firstName;//limits input to SIZE-1 characters to include null character 
    cout<<endl;
    cout<<firstName<<endl;//there is no boudary checking for char array so be careful of override 
    //thus use setw to limit input size


    char ch;
    cout<<"Strike any key to continue " ;
    cin>>ch;
    cout<<ch;
    //problem of using cin ---does not include whitespace characters like space, tab, enter as input
    //thus to include whitespace characters use cin.get() or cin.getline() 
    //cin.getline(ch);
    //cout<<ch;
    //this will not work as cin.getline() requires char array as argument 

    //Another problem is that cin and cin.get() work differently when used together --
    //gives unexpected results--input buffer issue due to null character left by cin
    //thus to avoid this use cin.ignore() to clear the input buffer before using cin.get()



return 0;
}