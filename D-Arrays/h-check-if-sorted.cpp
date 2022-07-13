#include <iostream>

bool isSorted(int nums[], int size){
    for(int i = 0; i < size; i++){
        if(nums[i] > nums[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int size = 5;
    int nums[5] = {1,2,3,4,9};
    std::cout << isSorted(nums, size) << std::endl;
    return 0;
}