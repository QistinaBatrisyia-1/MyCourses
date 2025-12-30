//using parallel array
#include <iostream>
using namespace std;

//function prototype
void modifyArray(double array[]);
void Test(int z[]);
int main(){
   
    //no need to include size since array is passed by reference
    //before modifying 
     //call
    double rainfall[12]={23.4,45.6,12.3,67.8,34.5,23.4,56.7,78.9,90.1,12.3,34.5,45.6};
    cout<<"Before modifying, first element is "<<rainfall[0]<<endl;
    //call
    modifyArray(rainfall);
    cout<<"After modifying, first element is "<<rainfall[0]<<endl;

    int myArr [4]={3,4,5,6};
    for(int i=0;i<4;i++)
    cout<<myArr[i]<<" ";
    cout<<endl;

    Test(myArr);
    cout<<endl;
    for(int i=0;i<4;i++)
    cout<<myArr[i]<<" ";
    system("pause");
return 0;}


void modifyArray(double array[]){
    array[0]=999;
}

void Test(int z[])
{
int temp=z[3];
z[3]=z[0];
z[0]=temp;
for(int
j=0;j<4;j++)
cout<<z[j]<<" ";
}