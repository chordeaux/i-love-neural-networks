#ifndef NETWORK_H
#define NETWORK_H

#include <layer.hpp>
#include <vector>

class Network {
    private:
        size_t numLayers;
        std::vector<size_t> layerSizes;
        std::vector<Layer> layers;
        double learningRate;
    
    public:
        Eigen::VectorXd forwardPass(Eigen::VectorXd input);
        //#TODO: properly define this (learn the algorithm properly to see what it starts with)
        void backProp(double cost);
};

#endif