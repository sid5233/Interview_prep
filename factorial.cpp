
#include <iostream>
using namespace std;

int main(){
    
    int num = 6,fact=1;

    
    for (int i = 1; i <= num; i++)
    {
        fact = fact*i;
    }
    cout << "Factorial is " << fact;
    return 0;
}