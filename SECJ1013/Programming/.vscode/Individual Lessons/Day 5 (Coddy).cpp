//Day 5_ Topics Covered: Type Casting--converting from one data type to another
#include <iostream>
using namespace std;

int main(){
    //Type Casting (Implicit -Automatic type conversion> Integer to Double)
    int number_1 = 5;
    double decimal_1=number_1; // automatically becomes 5.0 -by initializing it as another variable type
    // with calculation
    int x = 7;
    double result = x / 2.0; // result is 3.5
    //Output 
    cout<<"Implicit Type Casting: "<<endl;
    cout<<"Integer value: "<<number_1<<endl;
    cout<<"After converting to Double: "<<decimal_1<<endl;
    cout<<"Result of calculation (7/2.0): "<<result<<endl;

    cout<<"------------"<<endl;
    //Type Casting (Explicit -Manual type conversion> Double to Integer)
    double decimal_2 = 9.7;
    int number = (int) decimal_2;  // becomes 9 (decimal part is truncated)
    // with calculation
    double price = 19.99;
    int roundedPrice = (int) price;  // becomes 19
    //Output
    cout<<"Explicit Type Casting: "<<endl;
    cout<<"Decimal value: "<<decimal_2<<endl;
    cout<<"Converting to Integer Value : "<<number<<endl;
    cout<<"Converting calculation value to Integer Value : "<<roundedPrice<<endl;




   cout<<"------------"<<endl;
   //Type Casting (Conversion of value(int/double) to string using std::to_string()
     int number_3 = 789;
     bool isValid = true;
     string text1 = to_string(number);  // becomes "789"
     string text2 = isValid ? "true" : "false";  // becomes "true"
     cout<<"Conversion of int(value) to string: "<<endl;
     cout<<"Number: "<<number_3<<endl;
     cout<<"Conversion to string: "<<text1<<endl;
     cout<<"Conversion of bool(value) to string: "<<endl;
     //cout<<boolalpha; // to print bool as true/false
     cout<<"Boolean value: "<<isValid<<endl;
     cout<<"Conversion to string: "<<text2<<endl;


     cout<<"------------"<<endl;
     //Conversion of double to string--by default adds six decimal places
     double n1 = 789.0;
     string text3 = to_string(n1);// becomes "789.000000"
     double n2 = 789.5;
     string text4 = to_string(n2);// becomes "789.500000"
     double n3 = 789.123;
    string text5 = to_string(n3);// becomes "789.123000"
    //Output
    cout<<"Example of Conversion of double to string: "<<endl;
    cout<<"Number 1: "<<n1<<endl;
    cout<<"Converion to string :"<<text3<<endl;

    //Converting string to number using stoi()--integer and stod()--doublw
    string numberText = "123";
    int number4 = stoi(numberText);  // becomes 123
    string decimalText = "45.67";
    double decimal4= stod(decimalText);  // becomes 45.67

    //string invalidNumber = "abc";
    //int number = stoi(invalidNumber);  // This will throw an error
    return 0;
}