#include <iostream>
using namespace std;


//function prototype
void funcOne(int [],int);
int findSum(int [],int);

int main(){
    int list[50];
    int num;
    funcOne(list,50);
    findSum(list,num);
    return 0;
    
}


void funcOne(int list[],int num)
{
    cout<<"Enter numbers : "<<endl;
    for (int i=0;i<num;i++){
      cin>>list[i];
    }

    cout<<"The numbers are : "<<endl;
    for (int i=0;i<num;i++){
      cout<<list[i]<<" "<<endl;
}
}

int findSum(int list[],int num)
{
    int sum=0;
    for (int i=0;i<num;i++){
        sum+=list[i];
    }
    return sum;
}