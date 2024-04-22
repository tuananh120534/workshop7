#include "TV.h"
#include "Appliance.h"
#include <iostream>

int main() {
    // Create a TV object with a power rating of 100 watts and a screen size of 42 inches
    TV myTV(100, 42.0);

    // Check the initial properties of the TV
    std::cout << "Initial TV Power Rating: " << myTV.get_powerRating() << " watts" << std::endl;
    std::cout << "Initial TV Screen Size: " << myTV.getScreenSize() << " inches" << std::endl;
    std::cout << "Initial TV Status: " << (myTV.get_isOn() ? "On" : "Off") << std::endl;

    // Turn on the TV and check its status
    myTV.turnOn();
    std::cout << "TV is now " << (myTV.get_isOn() ? "On" : "Off") << std::endl;

    // Set a new screen size for the TV and display the updated size
    myTV.setScreenSize(55.0);
    std::cout << "Updated TV Screen Size: " << myTV.getScreenSize() << " inches" << std::endl;

    // Calculate and display the TV's power consumption
    double powerConsumption = myTV.getPowerConsumption();
    std::cout << "TV Power Consumption: " << powerConsumption << " watts" << std::endl;

    // Turn off the TV and check its status again
    myTV.turnOff();
    std::cout << "TV is now " << (myTV.get_isOn() ? "On" : "Off") << std::endl;

    return 0;
}