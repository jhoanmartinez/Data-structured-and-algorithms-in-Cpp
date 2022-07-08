//Fixed sized
//Dynamic sized

#include <iostream>

int main(){
    // [stack area] = Where local variables are store
    std::cout << "Sized" << std::endl;
    int n = 23;
    int arr[100];
    int arr[n];
    int arr[] = {1,76,2,5,4};

    // [heap area] = Store dynamic allocated memory
    int *arr = new int[n];

    std::cout << "Dynamic" << std::endl;

    return 0;
}

