// Mid Term Test

// Program 2
// Student's name: ______________________________ Matric Number:_____________________

#include <iostream>
#include <cmath>
using namespace std;


//? function çurrency_menu  is fully given. Do nothing in it.
//?   The function is to display the options of foreign currencies for 
//?   the user to choose from

//(a)declaring variable constants--currency symbols and exchange rates (using global variables)
const double indo_IDR=0.000286;
const double bangla_BDT=0.0378;
const double chinese_CNY=0.62;

//2.function for currency MLS
int myCurrency(int myr_currency,char code,int notes)
{
  int i;
    int denominations[] = {100, 50, 20, 10, 5, 1};
   
    for (i = 0; i < 6; i++) {
        notes += myr_currency / denominations[i];//removes one by one ---100,50,20,5,1
        myr_currency %= denominations[i];//myr_currency=myr_currency%denominations[i]
    }
    //end while loop
  return notes;
}

//3.create a function to return banknotes with code
double codeBankNote(char code_1){
  switch (toupper(code_1)){//toupper is used to handle both lowercase and uppercase
   case 'A':return 100.0;
   case 'B': return 50.0;
   case 'C':return 20.0;
   case 'D':return 10.0;
   case 'E':return 5.0;
   case 'F':return 1.0;
   default: return 0.0;
  }
}

//4

char currency_menu(char& code_place)
{
    cout << endl;
    cout << "Pick a currency to convert from:" << endl;
    cout << "I. Indonesian Rupiah (IDR)" << endl;
    cout << "B. Bangladeshi Taka  (BDT)" << endl;
    cout << "C. Chinese Yuan  (EGP)" << endl
         << endl;
    cout << "Choose a code =>";
    cin >> code_place;
    cout << "You chose: " << code_place << endl;
    return code_place;
}

int main()
{
  int mls_RM;
  char code;
  int notes;
    double value;  
    //double codeBankNote(char);//function definition but it is already declared in function definition

  currency_menu(code);//function call
  //function definition : char currency_menu(code);
  cout<<"Please enter a currency code(A,B,C,D,E,F)"<<endl;
  cin>>code;

  cout << "Please enter amount MYR: ";
  cin  >> mls_RM; 
  notes=myCurrency(mls_RM,code,notes);
  value = codeBankNote(code);

    cout << "Banknote value for code " << code << " is " << value << " MYR"<<endl;
    cout<<endl;
   
    cout << "Total notes needed for " << mls_RM << " MYR is " << notes << endl;
    system("pause"); //? comment this line out should you DevC++
    return 0;
}
//failed programming