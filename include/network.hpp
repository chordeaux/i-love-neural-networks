#ifndef NETWORK_H
#define NETWORK_H

#include <layer.hpp>
#include <vector>

class Network {
    private:
        size_t num_layers;
        std::vector<size_t> layer_sizes;
        std::vector<Layer> layers;
    
    public:
        Eigen::VectorXd forward_pass(Eigen::VectorXd input);
        //#TODO: properly define this (learn the algorithm properly to see what it starts with)
        void back_prop(double cost);
};

#endif