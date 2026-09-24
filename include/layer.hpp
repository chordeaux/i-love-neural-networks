#include <Eigen/Dense>

class Layer {
    private:
        size_t dim_in;
        size_t dim_out;
        Eigen::MatrixXd weights;
        Eigen::VectorXd biases;
        Eigen::VectorXd activation(Eigen::VectorXd z);

    public:
        Eigen::VectorXd out(Eigen::MatrixXd in);
};