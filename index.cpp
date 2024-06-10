// Code Challenge:
// Write a recursive C++ function to calculate the nth Fibonacci number. The Fibonacci sequence starts with 0 and 1, 
// and each subsequent number is the sum of the two preceding ones.

// This lesson delves into the mechanics of recursive function calls and introduces the concept of the call stack. 
// Understanding how function calls are managed is essential when working with recursion.




#include <iostream>
#include <memory>
using namespace std; 


int Fibonacci(int n){
    if (n <= 1){
        return n;
    }
        return Fibonacci(n-1) + Fibonacci(n-2);
}
    





int main(){
    int num, result;
    cout << "Please enter the Fibbonacci number you would like to calculate: ";
    cin >> num;
    result = Fibonacci(num);
    cout << "The Fibonacci sum is: " << result << " " << endl;
    return 0;
}