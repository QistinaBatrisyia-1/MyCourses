//This program demonstrates basic C++ input and output
//It use variables,identifiers,cin and cout statements
#include <iostream> //We need this preprocessor directive to use cin and cout
using namespace std; //This namespace tells that we are using the standard namespace

int main() {
    //We must define variables before using them 

    char c='A'; cout<<6+c<<endl;//int

    int i=25;
    cout<<6.1+1<<endl; //double

    int x,y=25; float z=2.5;
    x=y+z; //int
    cout<<x<<endl;

    int y1=50,y2=63,x1=30,x2=40;
    cout<<(y2-y1)/(x2-x1)<<endl;

    int kira=5;
    int nilai_pertama=10,nilai_kedua;

    nilai_kedua=5*kira -- + nilai_pertama;
    cout<< kira << endl;
    cout<<nilai_kedua<<endl;
    cout<<kira<<endl;

    nilai_kedua=5*--kira+nilai_pertama;
    cout<<kira<<endl;
    cout<<nilai_kedua<<endl;

    double m;
    m=(y2-y1)/(x2-x1); //This statement will be int because of the equation
    cout<<"The value of m is "<<m<<endl;

    float n;
    n=static_cast<float>(y2-y1)/(x2-x1);

    char ch='C';
    cout<<static_cast<int>(ch)<<endl;

    int a=1;
    double d=1.0;

    //a=46/9;
    //cout<<a<<endl;

    //a=46%9+4*4-2;
    //cout<<a<<endl;

    //a=45+43%5*(23*3%2);
    //cout<<a<<endl;

    //a%=3/a+3;
    //cout<<a<<endl;
    
   //d+=1.5*3+(++a);
   //cout<<d<<endl;

   d-=1.5*3+(++a);
   cout<<d<<endl;

   return 0;
}