#include <layer.hpp>
#include <vector>

class Network {
    private:
        size_t num_layers;
        std::vector<size_t> layer_sizes;
        std::vector<Layer> layers;
    
    public:
        Eigen::VectorXd forward_pass(Eigen::VectorXd input);
        void back_prop(double cost);
};