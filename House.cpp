#include "Appliance.h"
#include "House.h"





    House::House():House(0){};
    House::House(int _numAppliances){
        appliances = new Appliance*[_numAppliances];
        numAppliances = _numAppliances;
    };
bool House::addAppliance(Appliance * _appliance){
    if (counter < numAppliances)
    {
        appliances[counter] = _appliance;
        counter ++;
        return true;
    }else{
        return false;
    }
    
};
double House::getTotalPowerConsumption(){
double total= 0;
for (int i = 0; i < counter; i++)
{
    total += appliances[i]->getPowerConsumption();
}
return total;

};