#include <layer.hpp>
#include <iostream>
#include <activations.hpp>


int main(){
    //defining a layer, weights are initialized automatically as random matrices
    size_t dimIn = 1;
    size_t dimOut = 1;
    Layer layer = Layer(dimIn, dimOut, relu);

    std::cout << layer;
    
}