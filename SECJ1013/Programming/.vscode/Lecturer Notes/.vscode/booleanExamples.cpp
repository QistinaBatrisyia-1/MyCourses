#include <iostream>
using namespace std;

int main() {
    bool b = false; //b intially is false
    cout << boolalpha;
    cout << b << endl;
    
    int number =0;
    b=-10;          // Now, b is true
    cout << b << endl;
    b= number;
    cout << b << endl;// b is false again
    
    int q=5;
    int p;
    b=q; //5 becomes true
    p=b; // True-becomes 1
    cout << " The value of p is " << p <<endl;


    cout << "----------------" << endl;
    
    int a=10;

    cout << a << endl;
    cout << (a==1) << endl;
    cout << (a>1) << endl;
    cout << (a=5) << endl;

    a = (a!=5);
    cout << a << endl;

    cout << "----------------" << endl;

    
    
    cout << "----------------" << endl;
    int x=0;
    if ((0<x) && (x<10))//syntax error
       cout << x << endl;

    x=1;
    if (2<x<9);
      cout<< "First " << x << endl;
    if ((2<x) && (x<9))
       cout << " Second" << x << endl;


    cout<< "----------------" << endl;

    int n=0;

    if (n)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;


    int z=1;

    if (z =1 )
      cout << "Yes" << endl;
    else 
      cout << "No" <<endl;

    //simplified statement of if else
    (x < 3)? cout << "Yes" <<endl: cout << "No" <<endl;
    cout << (x < 3 ? "Yes" : "No") << endl;

    //If x=1 ,output Yes, If x=2,output No,else output Other;
    bool h = true;

    /*switch ('h') {  //all case/statement in the curly bracket
      case 1:
      cout<<"Yes"<<endl;
      break;  //break needs to be used to stop the execution after a case is matched

      case 2:
      cout<<"No"<<endl;
      break;

      default: //for else statement
      cout<<"Other"<<endl;
      break;
    }*/
    
    
     #define DEFINE 1
     const int const2=2;
     const int var3=3;
     int value;
     switch (value)
    { 
      case 0 :
      cout << "Four";
      break;
      
      case DEFINE :
      cout << "One";
      break;
      
      case const2 :
      cout << "Two";
      break;
     
      case var3 :
      cout << "Three";
      break;
    }
 
    cout<<"----------------"<<endl;
    for (n=10 ; n>0 ; n=n-1)
    {
      cout << n <<" ";
    }

    cout<<"----------------"<<endl;

    for (int i=10 ; i>0 ; i=i-1)
    {
      if(i<8)
        break;
        cout << i <<" ";
    }


  
    return 0;
}