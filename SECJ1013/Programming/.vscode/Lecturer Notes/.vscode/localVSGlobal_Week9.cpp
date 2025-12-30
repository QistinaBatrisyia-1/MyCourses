/*#include <iostream>
using namespace std;

//using static local variable ---comparing static local variable and local variable
    void showVar();
    int main ( ) {
      for (int count=0;count<10; count++)
      showVar();
      system("pause");
       return 0;
}
     void showVar() {
      int var = 10;//becomes local variable ---fail to retain the previous input(content unsaved)
      //using static var ---content is retained 
      cout << var << endl;
      var++;
}*/

/*
//static local variable 2---comparing with global variable 
#include <iostream>
using namespace std;
 int j = 40;
    void p()
     { int i=5;
       static int j=5;//local is prioritized first than global variable 
       i++;
       j++;
       cout<<"i: "<<i<<endl;
       cout<<"j: "<<j<<endl;
    }
     int main()
     { p();
       p();
       return 0;}
       */

/*
       //using passby reference
       #include <iostream>
       using namespace std;
       void test(int, int&);
        int main()
        {
        int num;
        num=5;
        test(24, num);
        cout<<num<<endl;
        test(num,num);
        cout<<num<<endl;
        test(num*num, num);
        cout<<num<<endl;
        test(num+num,num);
        cout<<num<<endl;
        system("pause");
        return 0;
        }
        void test(int first, int& second)
        {
        int third;
        third=first+second*second+2;
        first=second-first;
        second=2*second;
        cout<<first<<" "<<second<<" "<<third<<endl;
        }
*/

//using default argument
//Consider the following function prototype & function definition:
#include <iostream>
using namespace std;
void testDefaultParam(int , int=5, double=3.2);


int main (){
    testDefaultParam(6);
    testDefaultParam(3,4);
    testDefaultParam(3,4.5);
    testDefaultParam(3,4, 5.5);
    testDefaultParam(3.4);
}

void testDefaultParam(int a, int b, double z)
    {
      int u;
      a=a+static_cast <int> (2*b+z);
      u=a+b*z;

      cout<<"a = "<<a<<endl;
      cout<<"u = "<<u<<endl;
    }


//What is the output of the following function calls?
//a) testDefaultParam(6);
//b) testDefaultParam(3,4);
//c) testDefaultParam(3,4.5);
//d) testDefaultParam(3,4, 5.5);
//e) testDefaultParam(3.4);
