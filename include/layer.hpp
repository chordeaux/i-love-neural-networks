#ifndef LAYER_H
#define LAYER_H

#include <Eigen/Dense>
#include <iostream>

class Layer {
    private:
        size_t dimIn;
        size_t dimOut;
        Eigen::MatrixXd weights;
        Eigen::VectorXd biases;
        Eigen::VectorXd (*activation)(const Eigen::VectorXd&);

    public:


        Eigen::VectorXd out(Eigen::MatrixXd in);
        Layer(size_t dimIn, size_t dimOut, Eigen::VectorXd (*activation)(const Eigen::VectorXd&))
        :   dimIn(dimIn),
            dimOut(dimOut),
            weights(Eigen::MatrixXd::Random(dimOut, dimIn)),
            biases(Eigen::VectorXd::Zero(dimOut)),
            activation(activation) {
            }
            

    friend std::ostream& operator<<(std::ostream& os, const Layer& layer)
    {
        os << "Layer(" << layer.dimIn << " -> " << layer.dimOut << ")\n"
           << "weights:\n" << layer.weights << "\n"
           << "biases:\n" << layer.biases;
        return os;
    }
};

#endif
