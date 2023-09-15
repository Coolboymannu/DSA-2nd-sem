/*13. WAP in C++ to print Fibonacci numbers, find thegreatest common divisor,
calculate power of a number, find factorial of a given number using recursion.*/
#include <iostream>

using namespace std;

// Function to print Fibonacci numbers
void printFibonacci(int n) {
    int prev = 0, curr = 1;
    cout << "Fibonacci Series up to " << n << " terms: ";
    
    for (int i = 0; i < n; ++i) {
        cout << prev << " ";
        int next = prev + curr;
        prev = curr;
        curr = next;
    }
    
    cout << endl;
}

// Function to calculate Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate power of a number using recursion
double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    if (exponent < 0)
        return 1.0 / power(base, -exponent);
    
    return base * power(base, exponent - 1);
}

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int n, a, b, exponent;
    
    // Fibonacci
    cout << "Enter the number of Fibonacci terms: ";
    cin >> n;
    printFibonacci(n);
    
    // GCD
    cout << "Enter two numbers to find GCD: ";
    cin >> a >> b;
    int gcdResult = gcd(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << gcdResult << endl;
    
    // Power
    cout << "Enter base and exponent to calculate power: ";
    cin >> a >> exponent;
    double powerResult = power(a, exponent);
    cout << a << " raised to the power " << exponent << " is: " << powerResult << endl;
    
    // Factorial
    cout << "Enter a number to find factorial: ";
    cin >> n;
    int factorialResult = factorial(n);
    cout << "Factorial of " << n << " is: " << factorialResult << endl;
    
    return 0;
}
