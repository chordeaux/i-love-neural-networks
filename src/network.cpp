#include <network.hpp>
#include <iostream>

Eigen::VectorXd Network::forwardPass(Eigen::VectorXd input) {
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

void Network::backProp(double cost) {

}


int main(){
    
}