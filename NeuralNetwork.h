#ifndef NEURALNETWORK
#define NEURALNETWORK

#include <vector>

namespace NN
{
    class NeuralNetwork
    {
    public:
        NeuralNetwork(std::vector<double> X, double y, double sizei);
        std::vector<double> x;
        double y;
        double sizei;
        std::vector<std::vector<double>> weights1;
        std::vector<double> weights2;
        double output;
        std::vector<double> layer1;

        double feedforward();
    };
}

#endif // NEURALNETWORK
