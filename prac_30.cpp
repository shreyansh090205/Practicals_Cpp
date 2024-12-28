#include <iostream>
using namespace std;
class Celsius; // Forward declaration
class Fahrenheit
{
private:
    double temperature; // Temperature in Fahrenheit

public:
    // Constructor
    Fahrenheit(double temp = 0.0) : temperature(temp) {}

    // Getter
    double getTemperature() const
    {
        return temperature;
    }

    // Overloaded assignment to Celsius object
    Fahrenheit &operator=(const Celsius &c);

    // Overloaded comparison operators
    bool operator>(const Celsius &c) const;
    bool operator<(const Celsius &c) const;
    bool operator==(const Celsius &c) const;
    void display() const
    {
        cout << temperature << " °F" << endl;
    }
};

class Celsius
{
private:
    double temperature;

public:
    Celsius(double temp = 0.0) : temperature(temp) {}

    // Getter
    double getTemperature() const
    {
        return temperature;
    }

    // Overloaded assignment to Fahrenheit object
    Celsius &operator=(const Fahrenheit &f);
    // Overloaded comparison operators
    bool operator>(const Fahrenheit &f) const;
    bool operator<(const Fahrenheit &f) const;
    bool operator==(const Fahrenheit &f) const;
    void display() const
    {
        cout << temperature << " °C" << endl;
    }
};
// Overloaded assignment operator for Fahrenheit to Celsius
Celsius& Celsius::operator=(const Fahrenheit& f) {
    temperature = (f.getTemperature() - 32) * 5.0 / 9.0;
    return *this;
}

// Overloaded assignment operator for Celsius to Fahrenheit
Fahrenheit& Fahrenheit::operator=(const Celsius& c) {
    temperature = (c.getTemperature() * 9.0 / 5.0) + 32;
    return *this;
}

//fahrenheit comparision
bool Fahrenheit::operator>(const Celsius& c) const {
    return temperature > ((c.getTemperature() * 9.0 / 5.0) + 32);
}

bool Fahrenheit::operator<(const Celsius& c) const {
    return temperature < ((c.getTemperature() * 9.0 / 5.0) + 32);
}

bool Fahrenheit::operator==(const Celsius& c) const {
    return temperature == ((c.getTemperature() * 9.0 / 5.0) + 32);
}
//celsius comparison
bool Celsius::operator>(const Fahrenheit& f) const {
    return temperature > ((f.getTemperature() - 32) * 5.0 / 9.0);
}

bool Celsius::operator<(const Fahrenheit& f) const {
    return temperature < ((f.getTemperature() - 32) * 5.0 / 9.0);
}

bool Celsius::operator==(const Fahrenheit& f) const {
    return temperature == ((f.getTemperature() - 32) * 5.0 / 9.0);
}

int main()
{
Fahrenheit f(100);  // 100°F
    Celsius c(9);   // Approximately equivalent to 100°F

    // Assign Fahrenheit to Celsius
    c = f;
    cout << "Celsius after assignment from Fahrenheit: ";
    c.display();

    // Assign Celsius to Fahrenheit
    f = c;
    cout << "Fahrenheit after assignment from Celsius: ";
    f.display();

    // Comparison
    Fahrenheit f2(80);  // 80°F
    Celsius c2(26.67);  // Approximately equivalent to 80°F

    if (f2 > c2)
        cout << "Fahrenheit object is hotter." << endl;
    else if (f2 < c2)
        cout << "Celsius object is hotter." << endl;
    else
        cout << "Both objects have the same temperature." << endl;

    return 0;
}