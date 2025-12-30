// PROGRAM 2      //! do not remove this line

// Mid Term Test SECJ1013  MOCK TEST 2 

// Student's name: ______________________________ Matric Number:_____________________

#include <iostream>

// Function to return item price based on code
double getItemPrice(int code) {
    switch (code) {
        case 101:
            return 9.90;
        case 201:
            return 6.90;
        case 305:
            return 7.99;
        case 404:
            return 5.99;
        default:
            return 0.0; // should not happen for valid codes
    }
}

// Function to get a valid item code from user
int getValidItemCode() {
    int code;
    while (1) {
        printf("Enter item's code=>");
        scanf("%d", &code);

        if (code == 0 || code == 101 || code == 201 || code == 305 || code == 404) {
            return code;
        } else {
            printf("Invalid code. Please try again!\n");
        }
    }
}

int main() {
    int code, quantity;
    double total = 0.0;

    while (1) {
        code = getValidItemCode();

        if (code == 0) {
            // End input, print total and exit loop
            printf("\nTotal amount to pay: %.2f\n", total);
            break;
        }

        printf("Enter amount of items=>");
        scanf("%d", &quantity);
        
        total += getItemPrice(code) * quantity;
        printf("\n");
    }

    return 0;
}

