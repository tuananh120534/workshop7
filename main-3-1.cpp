#include "House.h"
#include "Appliance.h"
#include "Fridge.h"  // Assuming you have a Fridge class
#include "TV.h"      // Assuming you have a TV class
#include <iostream>

int main() {
    // Create some appliances
    Appliance* fridge = new Fridge(150, 250.0); // Fridge with 150W power and 250L volume
    Appliance* tv = new TV(100, 42.0);         // TV with 100W power and 42 inches screen size
    Appliance* washingMachine = new Appliance(500); // Generic appliance with 500W power

    // Create a House object with space for 3 appliances
    House myHouse(3);

    // Add appliances to the house
    if (myHouse.addAppliance(fridge)) {
        std::cout << "Fridge added to the house." << std::endl;
    } else {
        std::cout << "Failed to add the fridge to the house." << std::endl;
    }

    if (myHouse.addAppliance(tv)) {
        std::cout << "TV added to the house." << std::endl;
    } else {
        std::cout << "Failed to add the TV to the house." << std::endl;
    }

    if (myHouse.addAppliance(washingMachine)) {
        std::cout << "Washing Machine added to the house." << std::endl;
    } else {
        std::cout << "Failed to add the Washing Machine to the house." << std::endl;
    }

    // Calculate the total power consumption
    double totalPower = myHouse.getTotalPowerConsumption();
    std::cout << "Total Power Consumption in the house: " << totalPower << " watts" << std::endl;

    // Don't forget to free the dynamically allocated appliance objects
    delete fridge;
    delete tv;
    delete washingMachine;

    return 0;
}