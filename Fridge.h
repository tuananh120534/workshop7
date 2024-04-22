#include "Appliance.h"
#ifndef FRIDGE_H
#define FRIDGE_H

class Fridge: public Appliance{
    private: 
    double volume;

    public:
    Fridge();
    Fridge(int _powerRating, double _volume);
    void setVolume(double _volume);
    double getVolume();
    double getPowerConsumption();
};


#endif