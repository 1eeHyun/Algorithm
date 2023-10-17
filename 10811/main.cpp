/**
 Dohyon has a total of N baskets, and each basket has numbers from 1 to N in order.
 The baskets are placed in a row, the leftmost basket is called the first basket,
 the next basket is called the second basket, the rightmost basket is called the Nth basket.
 Dohyon is going to reverse the order of basket M. When Dohyon changes the order in reverse order,
 he sets the range to reverse order and reverses the order of the baskets in the range.
 Given how to change the order of the baskets,
 write a program that reverses the order of baskets M and then prints the numbers written on the baskets from the leftmost basket.
 
 The first line is given N(1≤N≤100) and M(1≤M≤100).
 The M rows from the second line are given a way to reverse the order of the baskets.
 The method is denoted by ij, which means that the order of the i-th and j-th baskets is reversed from the left. (1 ≤ i ≤ j ≤ N)
 Dohyon changes the order of baskets in the order given by input.
 
 Example input:           Example output:
 5 4                              3 4 1 2 5
 1 2
 3 4
 1 4
 2 2
 **/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    int arr[100];
    
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }
    
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        
        reverse(arr + a - 1, arr + b);
    }
    
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    
   return 0;
}




