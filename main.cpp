#include <iostream>
#include <vector>
#include <cstdlib>
#include "NeuralNetwork.h"

using namespace NN;
using namespace std;

int main()
{
    vector<double> input;
    double size2 = 5,output;
    NeuralNetwork Objek(input, output, size2);
    cout<<Objek.weights2[2]<<endl;
    Objek.output = Objek.feedforward();
    cout<<" output nya adalah "<<Objek.output<<endl;
    return 0;
}
