/*
 A decimal number N is given.
 Write a program that outputs this number in B-dimensional form.

 There are places that cannot be expressed in numbers that
 go beyond decimal. In this case, capital letters of
 the alphabet are used as follows.

 A: 10, B: 11, ..., F: 15, ..., Y: 34, Z: 35
 
 Input:
 The first line is given N and B. (2≤B≤36)
 N is a natural number less than or equal to 1 billion.
 
 Output:
 Print the decimal number N on the first line in B decimal.
 
 Example input:             Example output:
 60466175 36                ZZZZZ
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char valueToChar(int c) {
    if (c >= 0 && c <= 9) {
        return '0' + c;
    } else {
        return 'A' + c - 10;
    }
}

int main() {
    string convert = "";
    int N, B;
    
    cin >> N >> B;
    
    while(N) {
        convert += valueToChar(N % B);
        N /= B;
    }
    
    reverse(convert.begin(), convert.end());
    
    cout << convert << endl;
    
    return 0;
}

