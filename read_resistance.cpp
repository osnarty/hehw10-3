//this program calulates the resistance of the second resister in the circuit
//it then reads the voltage between the resistors and calculates the resistance
#include "analogin.h"


int main(int argc, char* argv[])
{
    analogin AIN0(0); //resets any old value of AIN0 to 0
    
    
    
    int adcVal = AIN0.readADCsample(); // copied from previous questions
    float voltage = (1.80/4096) * adcVal;
    
    cout << "The adc value is: " << adcVal << endl;
    cout << "The voltage is: " << voltage << endl;
    
    float R1 = 10000;
    float VIN = 1.8;
    float resistance = (voltage * R1) / (VIN - voltage);
    
    cout << "The resistance is: " << resistance << endl;
    
    
    

}