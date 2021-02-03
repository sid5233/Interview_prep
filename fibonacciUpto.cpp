#include <iostream>
using namespace std;

int main(){

    int n=10,first=0,second=1,next=0;

    cout << first << " " << second << " ";
     next = first + second;
    while (next <=n)
    {
        cout << next << " ";
        first = second;
        second = next;
        next = first + second;
    }
    return 0;
        
}