#ifndef SENSOR_HPP
#define SENSOR_HPP

class Sensor {
public:
    Sensor(float initTemp = 25.0);
    float readTemperature();

private:
    float temperature;
};

#endif // SENSOR_HPP

