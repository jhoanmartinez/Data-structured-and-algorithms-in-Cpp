#include <iostream>

int search(int arr[], int n, int x){
    for(int i=0; i<=n; i++){
        if(arr[i] == x){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10, 3, 7, 5};
    int x = 5;
    int n = 4;
    std::cout << search(arr, n, x) << std::endl;
    return 0;
}