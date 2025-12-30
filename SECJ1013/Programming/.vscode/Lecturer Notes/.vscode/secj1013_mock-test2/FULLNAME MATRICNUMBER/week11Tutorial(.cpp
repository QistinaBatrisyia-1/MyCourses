#include <iostream>
using namespace std;

//function prototype
void changeName(char [][25], int);

int main(){
    const int NUM_FRIENDS=5;
    char names[NUM_FRIENDS][25]={
        "Sasha",
        "Maria",
        "Lia",
        "John",
        "Sara"
    };
    for(int i=0;i<NUM_FRIENDS;i++){
        cout<<names[i]<<endl;
    }
    changeName(names,NUM_FRIENDS);
    return 0;
}

void changeName(char names[][25], int size){
    for (int j=0;j<size;j++){
    cout<<"Enter friend's name : ";
    cin>>names[j];
    //cin.getline(names[j],25);//if u want use cin.getline,must use char array and include the size limit
    cout<<"Friend's name is : "<<names[j]<<endl;
}
}
