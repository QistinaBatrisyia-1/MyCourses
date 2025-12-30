#include <iostream>
#include <cmath>
using namespace std;
void f( int n ) {
    cout << "Inside f( int ), the value of the parameter is " << n << endl;
    n += 37;//no effect towards main method
    cout << "Inside f( int ), the modified parameter is now " << n << endl; }
    //value returning function

//error in type casting
/*int sum(int num1,int num2)//int data type
{
  double result;//double data type
    result =num1+num2 ;
    cout<<static_cast<double>(result)<<endl;
    return result;
}//will convert to the function data type if in integer---double becomes in decimals*/
//correct coding
double sum(int num1, int num2) // Change return type to double
{
    double result;
    result = static_cast<double>(num1) + static_cast<double>(num2);
    std::cout << result << std::endl;
    return result;
}

int main() {
    int m = 612;
        
    cout << "The integer m = " << m << endl;
    cout << "Calling f( m )..." << endl;
    f( m );//different variable with function prototype because variable in function prototype is considered "temporary/easily destroyed"
    cout << "The integer m = " << m << endl;
    int s=sum(1,2);
    cout<< s<<endl;
    return 0;
}

 

