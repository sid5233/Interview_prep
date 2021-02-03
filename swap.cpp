#include <iostream>
using namespace std;

int main() {
    int num1 = 11,num2= 22;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << num1 << " " << num2;    
}