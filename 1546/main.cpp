/*
 Sejun messed up the final exam.
 Sejun decided to fabricate the score and take it home.
 Sejun picked the maximum value out of his score.
 This value is called M. Then I fixed all the scores to score/M*100.

 For example, if Sejun's highest score is 70 and his math score is 50,
 his math score will be 50/70*100 and 71.43 points.

 Write a program to find a new average when you calculate Sejun's grade in the way above.
 
 The first line gives the number N of subjects tested.
 This value is less than or equal to 1000.
 Sejun's current score will be given in the second row.
 This value is a non-negative integer that is less than or equal to 100,
 and at least one value is greater than 0.
 
 Print a new mean on the first line.
 If the absolute or relative error between the actual correct
 answer and the output value is less than 10^-2, it is correct.
 
 Example input:         Example output:
 3                      75.0
 40 70 60
 
 3                      66.666667
 10 20 30
 */

#include <iostream>
using namespace std;

int main() {
    double arr[1000];
    double n, m;
    double sum= 0;
    double max, avg;


    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> m;
        arr[i] = m;
    }

    max = arr[0];
    for (int i = 1; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] / max * 100;
        sum += arr[i];
    }
    
    avg = sum / n;

    cout << avg << endl;

}
