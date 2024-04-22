#include "Appliance.h"
#ifndef HOUSE_H
#define HOUSE_H

class House{
    private: 
   Appliance ** appliances;
   int numAppliances;
   int counter= 0;

    public:
House();
House(int _numAppliances);
bool addAppliance(Appliance * _appliance);
double getTotalPowerConsumption();

  
};


#endif