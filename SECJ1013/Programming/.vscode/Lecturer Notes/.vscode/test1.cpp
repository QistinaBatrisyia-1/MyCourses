/*Name : QISTINA BATRISYIA BINTI NOOR MOHD AZLAN (A25CS0340)
         ANIS (A25 )
  Date : 25/12/2025*/

  #include <iostream> 
  using namespace std;

  //function prototype
  int ageRange(int& age);
  char genderType(char& gender);
  double calcBMR(int weight,int height,int age,char gender);

  int main()
  {
    //Variable declaration
    int age,height,weight;
    char gender;
    double BMR;
    cout<< "Basal Metabolic Rate (BMR) Calculator"<<endl;
    ageRange(age);
    genderType(gender);
   

    cout<<"Height (cm):";
    cin>>height;

    cout<<"Weight (kg):" ;
    cin>>weight;
    BMR =calcBMR(weight,height,age,gender);

    return 0;
  }


  int ageRange(int& age)
  {   
    do
    {
        cout<<"Age [15-80]: ";
        cin>>age;
    }while(age<15||age>80);
   return age;
}
  

char genderType(char& gender)
{
    do
    {
        cout<<"Gender [F @ M]: ";
        cin>>gender;
    }while(gender!='F'&&gender!='M'&&gender!='f'&&gender!='m');
    return gender;
}

double calcBMR(int& weight,int& height,int age,char gender,int BMR){
    while (gender =='M'||gender=='m'){
        BMR=(10*weight)+ (6.25*height)-(5*age) + 5;
    }
    while (gender=='F'||gender=='f'){
        BMR=(10*weight)+(6.25*height)-(5*age)-161 ;
    }
    cout<<"BMR = "<<BMR<<" Calories / day (using Mifflin-St Jeor Equation)"<<endl;
    return BMR;
}