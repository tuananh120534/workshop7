#include "Appliance.h"
#ifndef TV_H
#define TV_H

class TV: public Appliance{
    private: 
    double screenSize;

    public:
    TV();
    TV(int _powerRating, double _screenSize);
    void setScreenSize(double _screenSize);
    double getScreenSize();
    double getPowerConsumption();
};


#endif