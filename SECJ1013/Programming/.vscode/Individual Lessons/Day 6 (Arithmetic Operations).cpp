/*Day 6 Coddy Coding 
(Arithmetic Operations-Introduction to Modulo Operator)
(Increment and Decrement Operators)

*/
#include <iostream>
#include <cmath>// for fmod()
using namespace std;

int main(){
    //Type your code below
    //When working with floating-point numbers (doubles) in C++, you cannot use the modulo operator % directly--so use fmod()
    int a=9;
    double b=2.6;
    int c=11;
    int d=fmod(a,2);//fmod returns a double, but we can assign it to an int variable if the result is an integer value
    int e=fmod(a,3);
    double f=fmod(b,1.5);
    double g=fmod(b,3.9);
    int h=fmod(c,10);
    
    // Don't change the line below
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f = " << f << endl;
    cout << "g = " << g << endl;
    cout << "h = " << h << endl;
    return 0;
}