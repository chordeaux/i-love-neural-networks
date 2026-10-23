#include <network.hpp>
#include <iostream>

Eigen::VectorXd Network::forward_pass(Eigen::VectorXd input) {
    /*
    pseudocode:
    input = Input vector
    output = input
    for layer in layers:
        output = layer.out(output)
    return output
    */
    Eigen::VectorXd output = input;
    for (auto layer: layers) {
        output = layer.out(output);
    }
    return output;
}

void Network::back_prop(double cost) {

}


int main(){
    
}