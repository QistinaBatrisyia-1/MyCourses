// PROGRAM 1      //! do not remove this line

// Mid Term Test SECJ1013  MOCK TEST 2 

// Student's name: ______________________________ Matric Number:_____________________

#include <iostream>
using namespace std;


// (a)
int sum(int m, int n)
{
    int total=0;
    for(int i=m;i<=n;i++){
      total += i;//m=m+i;
    }
    return total;

}

// (b)
void swap(int& x, int& y)//allow direct modification from int main or other function
{
    int temporary=x;//temporary is used to hold one value but acts as medium of exchange between a and b
    x=y;
    y=temporary;//a's value is exchanged to b through temporary
}

int main()
{
    int a, b,c ;
    
    // (c)
    cout << "Enter two numbers=> ";
    cin>>a;
     cout<<a;
    cin>>b;
    cout<<b;
    // (d)
    if(a>b)
     swap(a,b);

    // (e)
    c=sum(a,b);
    
    // (f)
    cout<<"The sum is"<<c<<endl;

    
    system("pause");
    return 0;
}