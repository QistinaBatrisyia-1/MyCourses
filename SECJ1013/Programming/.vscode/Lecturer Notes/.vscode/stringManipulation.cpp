#include <iostream>
#include <cstring>
#include <cstdlib>//convert between string and numeric forms of numbers
using namespace std;

int main(){
    const int SIZE =20;
    char city[SIZE];
    char taman[SIZE]="Tmn U";

   // cin >>city;
   // cout<<"You entered: "<<city<<endl;//only display one word---any character after spacing is ignored

    //using cin line
    cin.getline(city,SIZE);
    cout<<"You entered: "<<city<<endl;//displays all
    
    //using strlen function---return length of string
    cout<<"Length of " <<city<< " is "<<strlen(city)<<endl;

    //using strcat- add string 2 to end of string 1
    //cout << "The combine string is "<<strcat(str1,str2)<<endl;[FORMAT]
    cout << "The combine string is "<<strcat(taman,city)<<endl;//cannot directly include character(literal c-string)

    //using strcpy---copy str2 to str1
    char copiedAddress[SIZE];
    strcpy(copiedAddress,taman);
    /*example-can put literal c-string
    strcpy(copiedAddress,"Tmn U,Skudai")*/
    
    //NOTE: No bound checking(determines length exceeded or not) is done at strcat and strcpy--excess cgaracters will take space of other variables
    
    //using strstr function---finds keywords of str2 from str1 (first occurence of "target")
    cout<<strstr(copiedAddress,"Skudai");

    //strcmp (string compare)---used to compare two null-terminated byte strings (C-style strings);return +ve/-ve 1(TRUE) if not the same/return 0(FALSE) if same  
        if(strcmp(copiedAddress,"Tmn,Skudai"))
          {
            cout<<"Different String"<<endl;
            cout<<strcmp(copiedAddress,"Tmn,Skudai")<<endl;
          }
         else 
          {
            cout<<"Same String"<<endl;
            cout<<strcmp(copiedAddress,"Tmn,Skudai")<<endl;
          }
    
    //using cstdlib header (atoi,atol,atof)
    //atoi function---convert alphanumeric to int
    int num;
    num=atoi("123abc");
    cout<<num<<endl;
    

    
    
    return 0;

}