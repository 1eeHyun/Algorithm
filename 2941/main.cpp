/*
 Not so long ago, before operating systems were as powerful as
 they are today, computers (which often had turbo buttons on the exterior)
 couldn't handle certain letters of the Croatian alphabet.
 Programmers agreed to use two or three-letter substitutions as in this table:
 Letter    Characters
    č         c=
    ć         c-
    dž        dz=
    đ         d-
    lj        lj
    nj        nj
    š         s=
    ž         z=
 
 For example, the word ljes=njak consists of six letters
 in the Croatian alphabet: lj, e, š, nj, a, k.

 Write a program that calculates the number of letters in the given word.
 
 Input:
 The first line contains a string of at most 100 characters.
 Only lowercase letters of the English alphabet and characters '–' and '=' will appear.
 The string will represent a word encoded as described above.
 
 Output:
 Output the number of letters in the input word.
 
 Example input:         Example output:
 ljes=njak              6
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    for (int i = 0; i < s.length(); ++i) {
        count++;
        if (i < s.length() - 1) {
            if (s[i] == 'c' && (s[i + 1] == '=' || s[i + 1] == '-')) {
                ++i;
            } else if (s[i] == 'd' && s[i + 1] == '-') {
                ++i;
            } else if (s[i] == 'l' && s[i + 1] == 'j') {
                ++i;
            } else if (s[i] == 'n' && s[i + 1] == 'j') {
                ++i;
            } else if (s[i] == 's' && s[i + 1] == '=') {
                ++i;
            } else if (s[i] == 'z' && s[i + 1] == '=') {
                ++i;
            }
        }

        if (i < s.length() - 2) {
            if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=') {
                ++i;
                ++i;
            }
        }
    }

    cout << count << endl;
    return 0;
}


