#include <iostream>
using namespace std;

int main(){
    double rainfall[12];
    double total=0.0;

    for (int i=0;i<12;i++){
           cout<<"The total rainfall for month "<< i+1<< " is"<<endl;
           cin>>rainfall[i];
     if(rainfall[i] >= 0) total += rainfall[i];
}
/*using do-while loop 
      for(int i=0;i<MONTH;i++)
      do{
        cout<<"Enter rainfall for month (i+1)<< ": ";
        cin>>rainfall[i];
        
        if(rainfall[i]<0)
          cout<<"Cannot be negative number" <<endl;
      }
          
      while (rainfall[i]<0);*/
   //smallest and largest raindrop amounts
   double smallest=rainfall[0];
    double largest=rainfall[0];
    for(int i=0;i<12;i++){
        if (rainfall[i]<smallest)
        smallest=rainfall[i];
        
        if (rainfall[i]>largest)
        largest=rainfall[i];
    }
      cout<<"The total amount of rainfall for the year is "<<total<<endl;
      cout<<"The largest rainfall amount for the year is "<<largest<<endl;
      cout<<"The smallest rainfall amount for the year is "<<smallest<<endl;

    return 0;
}