#include "one_rm_calc.h"

double OneRMCalc::calcBryzcki(){
    return (max_weight * (36 / (37 - max_rep)));
}

double OneRMCalc::calcEpley(){
    return (max_weight * (1 + (0.0333 * max_rep)));
}

double OneRMCalc::calcLander(){
    return ((100 * max_weight) / (101.3 - (2.67123 * max_rep)));
}

double OneRMCalc::calcLombardi(){
    return (max_weight * pow(max_rep, 0.1));
}

double OneRMCalc::calcMayhew(){
    return ((100 * max_weight) / (52.2 + (41.9 * pow(exp(1), (-0.055 * max_rep)))));
}

double OneRMCalc::calcOConner(){
    return (max_weight * (1 + (0.025 * max_rep)));
}

double OneRMCalc::calcWathan(){
    return ((100 * max_weight) / (48.8 + (53.8 * pow(exp(1), (-0.075 * max_rep)))));
}