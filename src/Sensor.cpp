#include "sensor.hpp"
#include <random>
#include <chrono>

Sensor::Sensor(float initTemp) : temperature(initTemp) {}

float Sensor::readTemperature() {
    std::default_random_engine generator(std::chrono::system_clock::now().time_since_epoch().count());
    std::normal_distribution<float> distribution(0.0, 0.5);  // simulate noise
    float delta = distribution(generator);
    temperature += delta;
    return temperature;
}//
//  Sensor.cpp
//  
//
//  Created by Hareesh Girinadhuni on 5/4/25.
//

