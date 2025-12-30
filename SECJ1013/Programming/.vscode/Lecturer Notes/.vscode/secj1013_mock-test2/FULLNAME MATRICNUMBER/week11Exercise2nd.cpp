#include <iostream>
using namespace std;

int main(){
    const int NUM_ROWS = 5; // Number of rows
    const int NUM_COLS = 5; // Number of columns
    int total = 0; // Accumulator

//2D array intialization
int numbers[NUM_ROWS][NUM_COLS] =//[NUM_ROWS] can be omitted ,since compiler can deduce it from initializer
{{2, 7, 9, 6, 4},               //first dimension not need to define size but other dimension must be defined
{6, 1, 8, 9, 4},
{4, 3, 7, 2, 9},
{9, 9, 0, 3, 1},
{6, 2, 7, 4, 1}};


    // Sum the array elements.
    for (int row = 0; row < NUM_ROWS; row++){
        for (int col = 0; col < NUM_COLS; col++)    //making two loops(for each variable) to access each element 
                                                    //in 2D array (by row then column)
        total += numbers[row][col];
    }
// Display the sum.
cout << "The total is " << total << endl;


//2nd example--summing by rows ( by making outer loops for rows, inner loop for columns)
 /*  const int NUM_STUDENTS = 3;
    const int NUM_SCORES = 5;
   // double total; // Accumulator
    double average; // To hold average scores
    double scores[NUM_STUDENTS][NUM_SCORES] =
{{88, 97, 79, 86, 94},
{86, 91, 78, 79, 84},
{82, 73, 77, 82, 89}};

        // Get each student's average score.
        for (int row = 0; row < NUM_STUDENTS; row++){
            // Set the accumulator.
        total = 0;
        // Sum a row.
            for (int col = 0; col < NUM_SCORES; col++)
            total += scores[row][col];
            // Get the average
            average = total / NUM_SCORES;
    // Display the average.
    cout << "Score average for student "<< (row + 1) << " is " << average <<endl;
    }
*/


//Example 3 (Summing by columns---outer loops for columns,inner loop for rows)
/*const int NUM_STUDENTS = 3;
const int NUM_SCORES = 5;
double total; // Accumulator
double average; // To hold average scores
double scores[NUM_STUDENTS][NUM_SCORES] =
{{88, 97, 79, 86, 94},
{86, 91, 78, 79, 84},
{82, 73, 77, 82, 89}};

// Get the class average for each score.
for (int col = 0; col < NUM_SCORES; col++)
{
// Reset the accumulator.
total = 0;
// Sum a column
for (int row = 0; row < NUM_STUDENTS; row++)
total += scores[row][col];
// Get the average
average = total / NUM_STUDENTS;
// Display the class average.
cout << "Class average for test " << (col + 1)
<< " is " << average << endl;
}*/
}
