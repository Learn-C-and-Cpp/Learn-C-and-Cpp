// Fahrenheit temperatures to Celsius

#include <iostream>
#include <cmath>

double fahrenheit_to_celsius(double temperature);
double fahrenheit_to_kelvin(double temperature);
void temperature_conversion(double fahrenheit);

int main()
{
    temperature_conversion(21.0);

    return 0;
}

double fahrenheit_to_celsius(double temperature)
{
    // BODMAS
    return  round(((temperature - 32)*5)/9);
}
double fahrenheit_to_kelvin(double temperature)
{
    return  round((((temperature - 32)*5)/9) +273);   //  (5.0 / 9.0) * (temperature - 32) + 273;
}

void temperature_conversion(double fahrenheit_temperature)
{
    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);

    std::cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}
