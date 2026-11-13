#ifndef LAYER_H
#define LAYER_H

#include <Eigen/Dense>
#include <iostream>

class Layer {
    private:
        size_t dim_in;
        size_t dim_out;
        Eigen::MatrixXd weights;
        Eigen::VectorXd biases;
        Eigen::VectorXd (*activation)(const Eigen::VectorXd&);

    public:


        Eigen::VectorXd out(Eigen::MatrixXd in);
        Layer(size_t dim_in, size_t dim_out, Eigen::VectorXd (*activation)(const Eigen::VectorXd&))
        :   dim_in(dim_in),
            dim_out(dim_out),
            weights(Eigen::MatrixXd::Random(dim_out, dim_in)),
            biases(Eigen::VectorXd::Zero(dim_out)),
            activation(activation) {
            }
            

    friend std::ostream& operator<<(std::ostream& os, const Layer& layer)
    {
        os << "Layer(" << layer.dim_in << " -> " << layer.dim_out << ")\n"
           << "weights:\n" << layer.weights << "\n"
           << "biases:\n" << layer.biases;
        return os;
    }
};

#endif
