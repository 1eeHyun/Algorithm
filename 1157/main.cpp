/*
 Given a word in alphabetical case,
 write a program to figure out what the most used alphabet is in this word.
 However, capital and lowercase letters are not distinguished.
 
 Input:
 The first line is given a word in uppercase and lowercase letters.
 The length of the word given does not exceed 1,000,000.
 
 Output:
 In the first line, the most commonly used alphabet
 in this word is printed in capital letters.
 However, if there are multiple most used alphabets, ? is output.
 
 Example input:             Example output:
 zZa                        Z
 
 z                          Z
 
 baaa                       A
 
 Mississipi                 ?
 */

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    string word;
    cin >> word;

    transform(word.begin(), word.end(), word.begin(), ::toupper);

    map<char, int> freq;

    for (char c : word) {
        freq[c]++;
    }

    char most_common = '?';
    int max_count = 0;
    bool is_duplicate = false;

    for (auto &pair : freq) {
        if (pair.second > max_count) {
            max_count = pair.second;
            most_common = pair.first;
            is_duplicate = false;
        } else if (pair.second == max_count) {
            is_duplicate = true;
        }
    }

    if (is_duplicate) {
        cout << "?" << endl;
    } else {
        cout << most_common << endl;
    }

    return 0;
}
