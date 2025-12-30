#include <iostream>
using namespace std;
//Topic: Array
int main(){
    //initialzing variables in array (example)---aka Array initialization
    int tests[5]={10,20,30,40,50};
    //eg. making a size declarators ---uses consT
/*  
const int SIZE=5;
int tests[SIZE];
int tests[SIZE];
//alters for different arrays but uses the same size--multi-control(easy program maintenance)
*/
    //Array typically uses for loop
       for(int i=0;i<5;i++){//for loop [i]:data type,initialize,condition,count)   
        cout<<tests[i];
          cout<<endl; 
        }
    //using array variable as regular variable
    tests[0] = 79;
    cout << tests[0]<<endl;
    cin >> tests[1];
    tests[4] = tests[0] + tests[1];
    //specify the index to be accessed---(eg.)cout<<tests;---this is wrong
//or
/*
int i=0;
cout<<tests[i];
*/
        //example 
        const int ARRAY_SIZE=5;
        int numbers[ARRAY_SIZE];

        for(int count=0;count<ARRAY_SIZE;count++){
        numbers[count]=99;
        }

        for(int count=0;count<ARRAY_SIZE;count++){
            cout<<"Element " <<count<<": "<<numbers[count]<<endl;
        }
//implicit array sizing ---without declaring size but do initialize the array 
        //eg.
        int quizzes[]={12,17,15,11};

//processing array content
/*Since array elements can also be treated as ordinary,be careful on applying operators.
Do not confuse subscripts with the elements.

    (eg.)
    tests[i]++; means to ADD 1 TO tests[i]--the whole array variable
    BUT
    test[i++]; means to ADD 1 TO [i]---increment 1 to i,no effects on tests*/

//initializing with a string-2 examples
const int SIZE=6;
char fName[SIZE] ={ 'H', 'e', 'n', 'r', 'y', '\0'};


//copying one array to another @ array assignment 
/*assign element-by-element,meaning to create another array(array_1=array_2)*/

    return 0;
}