#include <iostream>
#include <memory>
#include <cmath>

class OneRMCalc {
    public:
        OneRMCalc(int rep, int weight){
            max_rep = (double)rep;
            max_weight = (double)weight;
        }
        ~OneRMCalc(){};

        double calcBryzcki();
        double calcEpley();
        double calcLander();
        double calcLombardi();
        double calcMayhew();
        double calcOConner();
        double calcWathan();

    private:
        double max_rep;
        double max_weight;
};
