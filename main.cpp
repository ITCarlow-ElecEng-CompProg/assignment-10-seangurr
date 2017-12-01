/** Sean Gurr
 *  C00221886
 *  Ex. 10
 *  555 Timer Astable Multivibrator Calculations
 *  15/11/2017
 */

/**< Preprocessor directives */
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cstdio>
#include <windows.h>

using namespace std;

/**< Function prototype */
void timer555(double R1 , double R2 , double C1 , double *freq, double *duty);

/**< Main function */
int main()
{
    /**< Purpose of code */
    cout << "555 Timer Astable Multivibrator Calculations" << endl;

    /**< variable declarations */
    double R1=0, R2=0, C1=0, freq=0, duty=0;
    double *ptr_freq, *ptr_duty;

    /**< Assiging values to variables*/
    ptr_freq = &freq;
    ptr_duty = &duty;

    /**< While loop criteria */
    while (R1 <=0)
    {
       cout << "\nEnter a positive value for R1:";
       cin >> R1 ;
    }

      while (R2 <=0)
    {
       cout << "\nEnter a positive value for R2:";
       cin >> R2 ;
    }

      while (C1 <=0)
    {
       cout << "\nEnter a positive value for C1:";
       cin >> C1 ;
    }

    /**< Invoke sub function */
    timer555(R1 ,R2 ,C1 ,ptr_freq,ptr_duty);

    /**< Display result */
    cout << "\nThe frequency is :" << *ptr_freq << endl;
    cout << "\nThe duty cycle is :" << *ptr_duty << endl;

    return 0;
}

/**< subfunction for freq and duty cycle calculation */
 void timer555(double R1 , double R2 , double C1 , double *freq, double *duty)
 {
        /**< Perform calculations */
        *freq = (1.44/((R1+(2*R2))*C1));
        *duty = (R1+R2)/(R1+(2*R2));

        return;
 }
