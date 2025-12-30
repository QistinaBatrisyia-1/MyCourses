/*Day 7 Self-Learning through Coddy
Topic (1): Increment and Decrement

***NOTES Topic (2): Prefix and Postfix of Increment & Decrement***
------Prefix : ++x
------Postfix : x++
Difference between between prefix and postfix--
Prefix: Increments/decrements the variable and then returns the new value.(operations comes first)
Postfix: Returns the current value of the variable and then increments/decrements it.(value is
returned first then increment/decrement)

***NOTES Topic (3): Arithmetic Shortcuts***
C++ created a cool shortcut for self-arithmetic operations,where:
Operator	Shortcut
+	        +=
-	        -=
*	        *=
/	        /=
%	        %=

***NOTES Topic (4): Comparison Operators***
Comparison operators are used to compare between two operands and return true or false:

Operator	Meaning	            Example
==	        Equal	            1 == 2 returns false
!=	        Not Equal	        1 != 2 returns true
>	        Greater Than	    1 > 2 returns false
<	        Lower Than	        1 < 2 returns true
>=	        Greater or Equal	1 >= 2 returns false
<=	        Lower or Equal	    1 <= 2 returns true

***NOTES Topic (5): Comparison Operators***
*/

#include <iostream>
using namespace std;

int main(){
//Topc (1): Increment and Decrement Operators
    /*Challenge:
    You are given a code with initialization of count. (Don't delete this line!)
    Your task is to add the following operations, in this order:

    Use the increment operator (++) four times to add 4 to count
    Use the multiplication operator (*) to multiply count by 2
    Use the decrement operator (--) once to subtract 1 from count*/
    int count =0;
     // Type your code below
//(1)
    count++;
    count++;
    count++;
    count++;
//(2)
    count *=2;
//(3)
    count--;
    // Don\'t change the line below
    cout<<"Count= "<<count<<endl;
    //CHALLENGE SOLVED!

//Topic (2): Prefix and Postfix of Increment & Decrement
    /*You are given a code with initializations of x, y, and z. (Don't delete these lines!)
    Your task is to use the increment/decrement operators to perform the following operations,
    in this order:

    Use the postfix increment operator to assign the current value of x to a and then increment x.
    Use the prefix decrement operator to decrement y and assign its new value to b.
    Use the postfix decrement operator to assign the current value of z to c and then decrement z.
    After performing these operations, print the values of a, b, c, x, y, and z to the console in the 
    following format:
    a: [value of a]
    b: [value of b]
    c: [value of c]
    x: [value of x]
    y: [value of y]
    z: [value of z]*/

    int x = 10;
    int y = 20;
    int z = 30;
    
    int a, b, c;
    // Type your code below
    a=x++;
    b=--y;
    c=z--;
    // Don't change the lines below
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    cout << "z: " << z << endl;
    //CHALLENGE SOLVED!

//Topic (3): Shortcut for self-arithmetic operations
    /*You are given a code with initialization of count. (Don't delete this line!)

    Your task is to add the following operations, in this order:

    Add 4 to count
    Multiply count by 2
    Subtract 1 from count
    Use the arithmetic shortcuts to do so!*/
    int ct=0;
    // Type your code below
    ct +=4;
    ct *=2;
    ct -=1;
    
    // Don\'t change the line below
    cout << "count = " << ct<<endl;
    //CHALLENGE SOLVED!

//Topic (4): Comparison Operators
    /*Write a script that initializes 2 variables n1 and n2 with the values 8 and 9 (accordingly).

    After that initialize another variable n3 that will hold whether n1 is bigger than n2.*/
    int n1=8,n2=9;
    bool n3;

    n3=n1>n2;
    //CHALLENGE SOLVED!
    return 0;
}
