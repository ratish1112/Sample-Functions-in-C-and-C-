#include <iostream>
#include <iomanip>

using namespace std;

int factorial (unsigned int n) {
    unsigned int fact{1};
    while (n!=1) {
        fact = fact*(n);
        n--;
    }
    
    return factorial;
}

int fibonacci (unsigned int n) {
   if (n > 0) { 
    if (n==1) {
        return n;
    }
    
    return (fibonacci(n-1) + fibonacci (n-2));
   }
   return 0;
}

int main() {
    
    
    
    
    return 0;
}
