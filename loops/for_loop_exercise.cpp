#include "exercise.h"
using namespace std;

// write a loop that sum up intergers from 0 all the way up to 99

    int sum;
    unsigned int sum_up_to_99(){

        for(int i = 0; i <= 99; i++){
            sum+= i;
        }
        
    return sum;
}