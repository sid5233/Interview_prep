#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {12,35,17,22,1,245,44,12,32};
    int max;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i]>arr[i+1])
        {
            max=arr[i];
        }
    }
    cout << max;
    


    return 0;
}
