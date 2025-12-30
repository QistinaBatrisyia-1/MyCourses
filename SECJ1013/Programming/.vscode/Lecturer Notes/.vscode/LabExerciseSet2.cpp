/*Name: Qistina Batrisyia Binti Noor Mohd Azlan
Matrics number : A25CS0340
Date: 11/11/2025
Set 2*/
#include <iostream>
using namespace std;

int main(){
    //Variable Declaration
    int intNum;
    int sum=0;
    int digit;
    cout<<"Enter an integer number: ";
    cin>>intNum;
      
     while(intNum>0){
         digit=intNum%10;
         sum=intNum+sum;
         intNum=intNum/10;
         cout<<digit;
         if(intNum!=0)
          cout<<"+";
           
        
      }
      cout<<"= "<<sum<<endl;
      if(sum%2==0)
       cout<<sum<< " is even number";
        else
          cout<<sum<<" is odd number";

         if(sum%4==0)
          cout<<sum<<"& multiple of 4"<<endl;
         else if (sum%5==0)
           cout<<" &multiple of 5"<<endl;
             

return 0;
}