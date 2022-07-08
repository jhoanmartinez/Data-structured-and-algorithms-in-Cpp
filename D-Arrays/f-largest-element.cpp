// time complexcity O(n)

#include <iostream>

int largestElement(int items[], int size){
    int current = 0;
    for(int next=1; next<size; next++){
        std::cout << current << std::endl;
        if(items[next] > items[current]){
            current = next;
        }
    }
    return current;
}

int main(){
    int size = 6;
    int num_items[6] = {2,3,5,6,4,1};
    int largest = largestElement(num_items, size);
    std::cout << largest << std::endl;
    return 0;
}