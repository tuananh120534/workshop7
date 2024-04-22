#include "Appliance.h"
#include <iostream>

int main() {
    // Create an Appliance object
    Appliance myAppliance;

    // Set its properties
    myAppliance.set_powerRating(500); // Set power rating to 500 watts

    // Check its initial status
    std::cout << "Initial Power Rating: " << myAppliance.get_powerRating() << " watts" << std::endl;
    std::cout << "Initial Status: " << (myAppliance.get_isOn() ? "On" : "Off") << std::endl;

    // Turn it on and check its status
    myAppliance.turnOn();
    std::cout << "Appliance is now " << (myAppliance.get_isOn() ? "On" : "Off") << std::endl;

    // Turn it off and check its status again
    myAppliance.turnOff();
    std::cout << "Appliance is now " << (myAppliance.get_isOn() ? "On" : "Off") << std::endl;

    // Check the final power rating
    std::cout << "Final Power Rating: " << myAppliance.get_powerRating() << " watts" << std::endl;

    return 0;
}