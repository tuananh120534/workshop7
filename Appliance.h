#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance{
    protected:
    int powerRating;
    bool isOn;
    public:
    Appliance();
    Appliance(int _powerRating);
    int get_powerRating();
    void set_powerRating(int _powerRating);
    int get_isOn();
    void set_isOn(bool _isOn);
    void turnOn();
    void turnOff();
    virtual double getPowerConsumption();
};

#endif