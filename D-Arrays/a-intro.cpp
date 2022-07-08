#include <iostream>

//Ventajas random access, find the ith element in constant time
//Cache friendliness, cache is a memoery closest to CPU, all the data
//accessed will be there to be faster, if iaccesse one item the processor
//will load the contiguos data

int main(){
    int nums[] = {23, 5, 37, 87, 1};
    std::cout << nums[0] << std::endl;
    return 0;
}
