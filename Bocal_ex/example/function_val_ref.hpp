#include <iostream>

void fois2_val(int n){
    n=n*2;
    std::cout << "Dans la fonction : " << n << std::endl;
}

void fois2_ref(int &n){
    n=n*2;
    std::cout << "Dans la fonction : " << n << std::endl;
} 