#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cctype>
using namespace std;
int main(){
     double area, radius;
     cout<< "This program calculates the area of a circle.\n";
     cout<<"What is the radius of the circle? ";
     cin>>radius;
     area=3.14159 * pow(radius,2.0);
     cout<<"The area is " << area <<endl;
      system ("pause");


   int nom1,nom2, result;
     cout<<"Enter two numbers";
     cin>>nom1>>nom2;
    if ((nom1<0)||(nom2<0)){ 
        cout<< "negative number/s";
}
    else{
      result= sqrt(nom1 + nom2);
      cout<<"The square root of "<< nom1+nom2 << "is" << result;

}

    char input;
     cout<<"Enter any character: ";
    cin.get(input);
    if (isalpha(input)){
     cout.put(input);
     cout<<"It is an alphabet";}
    if (isdigit(input))
     cout<<"It is a digit";
    if (islower(input))
     cout<<"The letter entered is lowercase";
    if (isupper(input))
     cout<<"The letter entered is uppercase";

char ch;
cin.get(ch);
if(isalpha(ch));{
    cout.put(ch);
    cout<< " is a letter";
}
if(isdigit(ch))
  cout<<"Digit";
else 
   cout<<"Special Character";

   char input_1[15];
   cout<<"Enter a name ";
   cin>>input_1;
   for(int i=0;input_1[i] !='\0';i++){
     input_1[i]=toupper(input_1[i]);
     cout<<"The name in upper case is:" << input_1;
   }

char convertString;
     cout<<"Enter character";
     cin>>convertString;
     if(islower(convertString)){
        convertString=toupper(convertString);
        cout<< convertString<<endl;
     }
    else if (isupper(convertString))
       convertString=tolower(convertString);
       cout<<input<<endl;
     
 return 0;
}