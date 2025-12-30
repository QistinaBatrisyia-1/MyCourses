/*
Name : QISTINA BATRISYIA BINTI NOOR MOHD AZLAN
Matrics number : A25CS0340
Date: 19/12/2025 */
#include <iostream> 
using namespace std;

//function prototypes
void dispStatus (int& active_cases);
void getInput (int& cases, int& new_cases,int& total_death,int& total_recovered);
void dispOutput (int active_cases);
double calcAverage(int num_states,int total_cases);


int main(){
    //variable declaration
    int new_cases=0,highest_cases=0,total_cases=0,num_states=0;
    int total_death,total_recovered,active_cases;
    char states[50];
    char highest_state[50];
    char ch;

    do{
        //function call
        getInput(total_cases,new_cases,total_death,total_recovered);
        dispOutput(active_cases);
       
//Covid-19 active cases calculation
    int active_cases=total_cases+new_cases-total_death-total_recovered;
    
    if(active_cases>highest_cases){
        highest_cases=active_cases;
        int i=0;
        while (states[i]!='\0'){
            highest_state[i]=states[i];
            i++;
        }
        highest_state[i]='\0';//adding null character
    }
 
    num_states++;
    cout<<"Press <ENTER> to continue...";
    cin.ignore();
    cin.get(ch);

    }while(ch=='\n');

    cout<<"<<<<<<<<<<<<< ACTIVE CASES >>>>>>>>>>>"<<endl;
    cout<<"Total : "<<total_cases<<endl;
    cout<<" Highest : "<<highest_cases<< " ("<<states<<")"<<endl;
    cout<<"Average for "<<num_states<<" states : "<<calcAverage(num_states,total_cases)<<endl;
    return 0;
}

void dispStatus (int& active_cases){
    cout<<"Active cases : "<<active_cases<<endl;
    cout<<"Status     : ";
        if(active_cases>=1&&active_cases<=20)
        cout<<"Yellow zone"<<endl;
        else if(active_cases>20&&active_cases<=40)
        cout<<"Orange zone"<<endl;
        else if (active_cases>40)
        cout<<"Red zone"<<endl;
        else 
        cout<<"Green zone"<<endl;
}


void getInput (int& total_cases, int& new_cases,int& total_death,int& total_recovered){
    char states[50];

    cout<<"<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>"<<endl;
    cout<<"State name : ";
    cin.ignore();
    cin.getline(states,50);

    cout<<"Total cases : ";
    cin>>total_cases;
    cout<<"New cases : ";
    cin>>new_cases;
    cout<<"Total death : ";
    cin>>total_death;
    cout<<"Total recovered : ";
    cin>>total_recovered;

    
}


void dispOutput (int active_cases){
    int total_cases;
    cout<<"<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>"<<endl;
    dispStatus(total_cases);
}


double calcAverage(int num_states,int total_cases){
    return static_cast<double>(total_cases)/num_states;
}