#include <layer.hpp>

Eigen::VectorXd Layer::out(const Eigen::MatrixXd in) {
    return activation(weights * in + biases);
}

