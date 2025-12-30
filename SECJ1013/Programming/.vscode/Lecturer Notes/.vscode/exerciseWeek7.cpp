#include <iostream>
using namespace std;

int calcSum(int n1, int n2){//int n1,int n2--supposedly be different from main function (scope only exists in the function)
    int sum = n1 + n2;
    return sum;

}
//using function prototype (void function)
int calculateSum(int,int);
int calculateDiff(int,int);


int calcDiff(int num1,int num2){
    int diff=num1-num2;
    return diff;
}

int main() {
    int num1, num2;
    int sum;
    int diff;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    sum=calcSum(num1,num2);
    diff=calcDiff(num1,num2);

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;

    return 0;
}

