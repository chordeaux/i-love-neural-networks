#include <layer.hpp>
#include <iostream>
#include <activations.hpp>


int main(){
    //defining a layer, weights are initialized automatically as random matrices
    size_t dim_in = 1;
    size_t dim_out = 1;
    Layer layer = Layer(dim_in, dim_out, relu);

    std::cout << layer;
    
}