#ifndef ACTIVATIONS_H
#define ACTIVATIONS_H
    #include<Eigen/Dense>
    #include<math.h>


    Eigen::VectorXd relu(const Eigen::VectorXd& z){
        return z.cwiseMax(0.0f);
    }

    Eigen::VectorXd softmax(const Eigen::VectorXd& z){
        float exponentialSum = 0;
        for(float zi : z){
            exponentialSum += exp(zi);
        }

        return z/exponentialSum;
    }

#endif