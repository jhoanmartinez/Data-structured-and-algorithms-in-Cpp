#include <iostream>

int secondLargest(int items[], int size){
    int result = -1, target = 0;
    for(int i=1; i<size; i++){
        if(items[i] > items[target]){
            result = target;
            target = i;
            std::cout << "result:" << result << std::endl;
            std::cout << "target: " << target << std::endl;
        }else if(items[i] != items[target]){
            if(result == -1 || items[i] > items[result]){
                result = i;
            }
        }
    }
    return result;
}

int main(){
    int lista[5] = {4,2,9,7,5};
    int func = secondLargest(lista, 5);
    std::cout << func << std::endl;
    return 0;
}