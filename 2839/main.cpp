/*
 Mirko works in a sugar factory as a delivery boy.
 He has just received an order: he has to deliver exactly
 N kilograms of sugar to a candy store on the Adriatic coast.
 Mirko can use two types of packages, the ones that contain 3 kilograms,
 and the ones with 5 kilograms of sugar.

 Mirko would like to take as few packages as possible.
 For example, if he has to deliver 18 kilograms of sugar,
 he could use six 3-kilogram packages.
 But, it would be better to use three 5-kilogram packages,
 and one 3-kilogram package, resulting in the total of four packages.

 Help Mirko by finding the minimum number of packages required
 to transport exactly N kilograms of sugar.
 
 Input:
 The first and only line of input contains one integer N (3 ≤ N ≤ 5000).
 
 Output:
 The first and only line of output should contain the minimum number
 of packages Mirko has to use. If it is impossible
 to deliver exactly N kilograms, output -1.
 
 Example input:             Example output:
 18                         4
 */

#include <iostream>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    if (n == 4 || n == 7) {
        cout << -1 << endl;
        return 0;
    }
    
    switch(n % 5) {
        case 0:
            cout << n / 5;
            break;
        case 1:
            cout << 2 + (n - 6) / 5;
            break;
        case 2:
            cout << 4 + (n - 12) / 5;
            break;
        case 3:
            cout << 1 + (n - 3) / 5;
            break;
        case 4:
            cout << 3 + (n - 9) / 5;
            break;
    }
    
    
    return 0;
}
