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
        std::function<Eigen::VectorXd(const Eigen::VectorXd&)> activation;



    public:
        //giving the function an alias so we dont have to write
        using ActivationFn = std::function<Eigen::VectorXd(const Eigen::VectorXd&)>;

        Eigen::VectorXd out(Eigen::MatrixXd in);
        Layer(size_t dim_in, size_t dim_out, Eigen::VectorXd (*p_activation(Eigen::VectorXd z)))
        :   dim_in(dim_in),
            dim_out(dim_out),
            weights(Eigen::MatrixXd::Random(dim_out, dim_in)),
            biases(Eigen::VectorXd::Zero(dim_out)),
            activation(std::move(activation)) {
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