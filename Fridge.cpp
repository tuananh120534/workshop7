#include "Appliance.h"
#include "Fridge.h"


Fridge::Fridge():  volume(0.0){
    Fridge(0,false);
};
    Fridge::Fridge(int _powerRating, double _volume){
        this->powerRating =_powerRating;
        this->isOn = false;
        this->volume = _volume;
    };
    void Fridge::setVolume(double _volume){
        this->volume = _volume;
        
    };
    double Fridge::getVolume(){
        return this->volume;
    };
    double Fridge::getPowerConsumption(){
        return powerRating*24*(volume/100);
    };