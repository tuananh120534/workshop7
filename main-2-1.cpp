#include "Fridge.h"
#include "Appliance.h"
#include <iostream>

int main() {
    // Create a Fridge object with a power rating of 200 watts and a volume of 250 liters
    Fridge myFridge(200, 250.0);

    // Check the initial properties of the fridge
    std::cout << "Initial Fridge Power Rating: " << myFridge.get_powerRating() << " watts" << std::endl;
    std::cout << "Initial Fridge Volume: " << myFridge.getVolume() << " liters" << std::endl;
    std::cout << "Initial Fridge Status: " << (myFridge.get_isOn() ? "On" : "Off") << std::endl;

    // Turn on the fridge
    myFridge.turnOn();
    std::cout << "Fridge is now " << (myFridge.get_isOn() ? "On" : "Off") << std::endl;

    // Set a new volume for the fridge
    myFridge.setVolume(300.0);
    std::cout << "Updated Fridge Volume: " << myFridge.getVolume() << " liters" << std::endl;

    // Calculate and display the fridge's power consumption
    double powerConsumption = myFridge.getPowerConsumption();
    std::cout << "Fridge Power Consumption: " << powerConsumption << " watt-hours" << std::endl;

    // Turn off the fridge
    myFridge.turnOff();
    std::cout << "Fridge is now " << (myFridge.get_isOn() ? "On" : "Off") << std::endl;

    return 0;
}