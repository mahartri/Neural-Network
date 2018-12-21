#include "NeuralNetwork.h"
#include <iostream>
#include <cmath>

using namespace NN;
using namespace std;

NeuralNetwork::NeuralNetwork(vector<double> X, double y, double sizei)
{
    x = X;
    this->y = y;
    this->sizei = sizei;
    x.resize(sizei);
    for(int i = 0; i < sizei; i++)
        x[i] = ((double) rand() / (RAND_MAX)) + 1;
    weights1.resize(4,vector<double>(sizei));
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < sizei; j++)
            weights1[i][j] = ((double) rand() / (RAND_MAX)) + 1;
    }

    weights2.resize(4);
    for(int i = 0; i < 4; i++)
        weights2[i] = ((double) rand() / (RAND_MAX)) + 1;
    output = 0;
    layer1.resize(4);
}

double NeuralNetwork::feedforward()
{
    vector<double> sum1;
    sum1.resize(4);
    for(int i = 0; i < 4; i++)
    {
        double temp1 = 0;
        vector<double> temp;
        temp.resize(sizei);
        temp = weights1[i];
        double j = 0;
        while(j < sizei)
        {
            temp1 = temp1+(x[j]*temp[j]);
            j++;
        }
        sum1[i] = temp1;
    }

    for(int i = 0; i < 4; i++)
    {
        layer1[i] = 1/(1+exp(sum1[i]));
    }
    double otput; otput = 0;
    for(int i = 0 ; i < 4; i++)
    {
        otput = otput+(layer1[i]*weights2[i]);
    }
    return otput;
}
