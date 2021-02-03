//prime number using flag

#include <iostream>
using namespace std;

int main(){

    int num=55,flag;

    for (int i = 2; i <= num; i++)
    {
        flag = 1;
        for (int j = 2; j <= i/2; j++)
        {
            if (i%j == 0)
            {
                flag=0;
                break;
            }
            
        }
        if (flag == 1)
        {
        cout << i << " ";
         
        }
    }
     return 0;
}