/*
 A group word refers to a case where for all characters
 present in a word, each character appears consecutively.
 For example, ccazzzzbb is a group word because c, a, z,
 and b all appear consecutively, and kin is also a group word
 because k, i, and n appear consecutively,
 but aabbbccb is not a group word because b appears apart.

 Write a program that takes N words as input and outputs the number of group words.
 
 input:
 The first line contains the number N of words.
 N is a natural number less than or equal to 100.
 From the second line, words are entered in the N lines.
 Words are only lowercase letters and are nonoverlapping,
 with a maximum length of 100.
 
 Output:
 Print the number of group words on the first line.
 
 Example input:             Example output:
 4                          1
 aba
 abab
 abcabc
 a
 */

#include <iostream>
#include <set>
using namespace std;

bool Checker(string str) {
    set<char> mySet;
    char lastSet = '0';
    
    for (char c : str) {
        if (lastSet != c) {
            if (mySet.find(c) != mySet.end()) {
                return false;
            }
            mySet.insert(c);
        }
        lastSet = c;
    }
    
    return true;
}

int main() {
    int N, count = 0;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        if (Checker(str)) count++;
    }
    
    cout << count << endl;
    return 0;
}
