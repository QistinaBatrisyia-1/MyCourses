#include <iostream>
#include <string>
using namespace std;
//Some example of datatypes that can be used in C++

int main(){
    cout <<"--- C++ Data Types Example ---" <<endl <<endl;

    //Integer Types (for whole numbers)
    int age=30;
    long population=4294967295;
    short temperature= -5;
    unsigned int distance= 10;
    int num;
    num=5;
    
    //Floating Point Types (for decimal number)
    float price=19.99f;  
    double pi=3.1416;                                      

    //Character Type (for a single character)
    char grade='A';
    char symbol ='$';

    //Boolean Type (for true/false values)
    bool isStudent=true;
    bool isRaining=false;
    cout<<boolalpha;//Use "boolalpha" to print "true" or "false" instead of 0 or 1
    cout<<"isStudent "<<isStudent<<endl;
    cout<<"isRaining "<<isRaining<<endl<<endl;

    //String Type (for text)
    string greeting= "Hello, World!";
    string name = "Qistina";
    cout<< " Greeting "<<greeting <<endl;
    cout<< "Name: " <<name<<endl;

    cout << 13 / 5 <<endl;//displays 2
    cout << 2 / 4  <<endl;// displays 0
    cout << 13 / 5.0 <<endl; // displays 2.6
    cout << 2.0 / 4 <<endl;// displays 0.5
    cout << 9 % 2 <<endl; // displays 1

    int z, y=-5;
    z= 8 - 3 + 9 / 2 + 2 * - y;
    cout << z << endl;
    z= 8 - (3 + 9 / 2) + 2 * - y;// try this
    cout << z << endl;


    return 0;
}