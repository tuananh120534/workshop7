#include "Appliance.h"
#include "TV.h"


TV::TV():  screenSize(0.0){
    TV(0,false);
};
    TV::TV(int _powerRating, double _screenSize){
        this->powerRating =_powerRating;
        this->isOn = false;
        this->screenSize = _screenSize;
    };
    void TV::setScreenSize(double _screenSize){
        this->screenSize = _screenSize;
        
    };
    double TV::getScreenSize(){
        return this->screenSize;
    };
    double TV::getPowerConsumption(){
        return powerRating*(screenSize/10);
    };