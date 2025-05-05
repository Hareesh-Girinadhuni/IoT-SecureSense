#include <iostream>
#include <thread>
#include <chrono>
#include "sensor.hpp"

int main() {
    Sensor tempSensor;

    for (int i = 0; i < 10; ++i) {
        float reading = tempSensor.readTemperature();
        std::cout << "Sensor reading: " << reading << " °C" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}

