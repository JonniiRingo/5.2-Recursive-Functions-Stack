// Code Example:

#include <iostream>
using namespace std;

void recursiveFunction(int n) {
    if (n <= 0) {
        return;
    }
    
    cout << "Entering recursiveFunction with n = " << n << endl;
    recursiveFunction(n - 1);
    cout << "Exiting recursiveFunction with n = " << n << endl;
}

int main() {
    recursiveFunction(3);
    return 0;
}
