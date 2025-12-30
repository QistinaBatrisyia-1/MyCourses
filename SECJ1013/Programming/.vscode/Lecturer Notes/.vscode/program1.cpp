#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

 int displayMenu() {//Error 1
    cout << "----------------------------------\n";
    cout << "Car Rental Program\n";
    cout << "----------------------------------\n";
    cout << "Choose the following options.\n";
    cout << "1. Display list of available car.\n";
    cout << "2. Rent a car.\n";
    cout << "3. Exit Program.\n";
    cout << "----------------------------------\n";
    
    int option;
    cout << "Option : " ;
    cin >> option;

    while (option < 1 || option > 3) {//Eror 2
        cout << "Invalid option! Enter valid option (1,2,3) : ";
        cin >> option;
    }
    return option;//Error 3
}

void displayCar() {
    cout << "\n-------------------------------------\n";
    cout << "List of available car\n";
    cout << "-------------------------------------\n";
    cout << "No.\tModel\t\tRate Per Hour\n";
    cout << "1.\tHonda Civic\tRm10.00\n";
    cout << "2.\tProton X70\tRm15.00\n";
    cout << "3.\tToyota Yaris\tRm7.00\n";
    cout << "4.\tPerodua Axia\tRm5.00\n";
    cout << "-------------------------------------\n";
}

void displayRentalRate() {
    cout << "The following rental rate calculation is as follows :\n";
    cout << "- Normal rate for the first 12 hours.\n";
    cout << "- Next 12 hours, the rate increase by 2%.\n";
    cout << "- After 24 hours, the rate increase by 5%\n\n";
}

float calcRentCar(int carModel, float hourRate) {//Error 4
    float modelRate, rentRate;

    switch (carModel) {//Error 5
        case 1:
            modelRate = 10.00;
            break;
        case 2:
            modelRate = 15.00;
            break;
        case 3:
            modelRate = 7.00;
            break;
        default:
            modelRate = 5.00;
    }

    if (hourRate <=12) {//Error 6
      rentRate = hourRate * modelRate;
    } else if (hourRate <= 24) {
      rentRate = (12 * modelRate) + ((hourRate - 12) * (modelRate * 1.02 ));
    } else {
      rentRate = (12 * modelRate) + (24 * (modelRate * 1.02)) + ((hourRate + 24) * (modelRate * 1.05));
    }

    return rentRate;
}

int main() {
    char repeat = 'Y';
    int choice;

    do {
        choice = displayMenu();//Error 8
        
        if (choice == 1) {
            displayCar();

        } else if (choice == 2) {
            
            displayCar();
            displayRentalRate();
            int car, hour;
            char name[20];
            string model;
            
            cout << "Enter your name : " ;
            cin >> name;
            cout << "Choose car model no. : " ;
            cin >> car;
            
            while (car < 1 || car > 4) {//Error 9
                cout << "Invalid option! Choose valid car model no. (1,2,3,4) : ";
                cin >> car;
            }
            
            switch (car) {
                case 1:
                    model = "Honda Civic";
                    break;
                case 2:
                    model = "Proton X70";
                    break;
                case 3:
                    model = "Toyota Yaris";
                    break;
                default:
                    model = "Perodua Axia";
            }
            
            cout << "Enter hour(s) to rent : " ;
            cin >> hour;
            float rent = calcRentCar(car, hour);//variable car and hour is used before this--Error 10
            
            cout << "\n---------------------------\n";
            cout << "Rental Details  \n";
            cout << "---------------------------\n";
            cout << "Name : " << name << "\n";
            cout << "Car model : " << model << "\n";
            cout << "Hour(s) rent : " << hour << "\n";
            cout << "Total rent : RM" << rent << "\n";
            cout << "---------------------------\n";
            
        } else {
            break;
        }
        
        cout << "\nEnter 'y' to continue and 'n' to exit the program : ";
        cin >> repeat;
        cout << endl;

    } while (repeat == 'Y');
    
    cout << "Program End.";
    system("pause");
    
    return 0;
}

// Mid Term Test

// Program 1
// Student's name: ______________________________ Matric Number:_____________________