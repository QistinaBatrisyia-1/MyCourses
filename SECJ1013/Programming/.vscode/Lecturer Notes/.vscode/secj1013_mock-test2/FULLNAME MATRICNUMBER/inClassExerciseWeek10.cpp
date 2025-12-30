#include <iostream>
using namespace std;

int main(){
    int values[10];
 

    cout<<"Enter a value :"<<endl;
    for (int i=0;i<10;i++){
        
        cin>>values[i];
    }
    int smallest = values[0];
    int largest = values[0];
    for(int i = 0; i < 10; i++) {
     if(values[i] < smallest) 
    smallest = values[i];
    if(values[i] > largest)
     largest = values[i];
}
    cout<<"The smallest value is "<<smallest<<endl;
     cout<<"The largest value is "<<largest<<endl;
    return 0;
}