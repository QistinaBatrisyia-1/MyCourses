#include <iostream>
using namespace std;

//function prototype--overloaded function //having same name but different parameter list
int average(int [],int);
double average(double [],int);
//must have different data type or number of parameters



int main(){
    //using parallel array
    int averageOfInt[]={1,2,3,4,5,6};
    double averageOfD[]={6.0,4.4,1.9,2.9,3.4,3.5};
    //not required to have size since already initialized
        cout<<"The average for integer array is : "<<average(averageOfInt,6)<<endl;
//function call does not use indexing--square brackets
        cout<<"The average for double array is : "<<average(averageOfD,6)<<endl;

    return 0;

}

int average(int array[],int size){
    int total=0;
    cout<<"The average of integer array is : " <<endl;
    for(int i=0;i<size;i++){
        total+=array[i];
    }
    return total/size;;
}
double average(double array[],int size){
    double total=0;
    cout<<"The average of integer array is : " <<endl;
    for(int i=0;i<size;i++){
        total+=array[i];
    }
    return total/size;;
}

