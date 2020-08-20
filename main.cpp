#include <iostream>
#include <iomanip>

using namespace std;

unsigned long int factorial (unsigned int n) {
    unsigned int fact{1};
    while (n!=1) {
        fact = fact*(n);
        n--;
    }
    
    return fact;
}

unsigned long long int fibonacci (unsigned int n) {
    if (n<=1) {
        return n;
    }
    
    return (fibonacci(n-1) + fibonacci (n-2));
}


