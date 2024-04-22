#include "Appliance.h"

Appliance::Appliance(): powerRating(0), isOn(false){};
    Appliance::Appliance(int _powerRating): isOn(false){
        powerRating = _powerRating;
    };
       int   Appliance::get_powerRating(){
        return this->powerRating;
       };
    void   Appliance::set_powerRating(int _powerRating){
        this->powerRating = _powerRating;
    };
    int   Appliance::get_isOn(){
        return this->isOn;
    };
    void   Appliance::set_isOn(bool _isOn){
        this->isOn=_isOn;
    };
    void Appliance::turnOn(){
        Appliance::set_isOn(true);
    };
    void Appliance::turnOff(){
        Appliance::set_isOn(false);
        
    };
    double Appliance::getPowerConsumption(){
        return 0;
    };