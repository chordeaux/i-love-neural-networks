#include <layer.hpp>

Eigen::VectorXd Layer::out(Eigen::MatrixXd in) {
    return activation(weights * in + biases);
}