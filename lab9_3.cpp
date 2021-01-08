#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    ifstream source("score.txt");
    string textline;
    double sum=0,sumpow = 0;
    double i=0;
    while(getline(source,textline)){
        sum += atof(textline.c_str());
        sumpow += pow(atof(textline.c_str()),2);
        i++;
    }
    double mean = (1/i)*sum;
    cout << "Number of data = "<< i<< endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean<< endl;
    cout << "Standard deviation = "<< sqrt(((1/i)*sumpow)-pow(mean,2));
}