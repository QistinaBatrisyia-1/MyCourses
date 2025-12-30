//Topic 7-Pointer

#include <iostream>
using namespace std;
int func(int a);
int main(){
    /*int *intptr;

    //cout<<&a<<endl<<a<<endl;//adding ampersand in front of variable ---prints out address
    //intptr=&a;
   // cout<<intptr<<endl<<*intptr;//adding asterisk--makes it a pointer variable
    //pointer points to address of variable,displaying the value,not the address
      // int a=1;
    int b=2;
    func(b);
    cout<<b<<endl; 
    return 0;*/
    int array[]={1,2,3,4};
    cout<<array[0]<<endl;
    cout<<array<<endl;
    cout<<*array<<endl;
    int *ptr=&array[0];
    cout<<ptr[0]<<endl;
}

int func(int a){
    a=1;
    return a;
}