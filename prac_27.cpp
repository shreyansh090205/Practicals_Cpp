#include <iostream>
#include <cmath>
using namespace std;
class Polar
{
    float radius;
    float angle;

public:
    Polar():radius(0.00),angle(0.0){}
    Polar(float r, float a):radius(r), angle(a){}
    Polar operator+(const Polar& p) const {
        // Convert both polar coordinates to Cartesian
        double x1 = radius * cos(angle * M_PI / 180.0);
        double y1 = radius * sin(angle * M_PI / 180.0);

        double x2 = p.radius * cos(p.angle * M_PI / 180.0);
        double y2 = p.radius * sin(p.angle * M_PI / 180.0);

        // Add Cartesian coordinates
        double x = x1 + x2;
        double y = y1 + y2;

        // Convert the result back to polar coordinates
        double newRadius = sqrt(x * x + y * y);
        double newAngle = atan2(y, x) * 180.0 / M_PI; // Convert radians to degrees

        return Polar(newRadius, newAngle);
    }

    friend ostream &operator<<(ostream &os, Polar &p)
    {
        os << "Polar Coordinate: (" << p.radius << ", " << p.angle << " degrees)";
        return os;
    }
    friend istream &operator>>(istream &is, Polar &p)
    {
        cout << "Enter radius: ";
        is >> p.radius;
        cout << "Enter angle (in degrees): ";
        is >> p.angle;
        return is;
    }
};
int main()
{
    Polar p1, p2, p3;
    cout << "Enter first polar coordinate:" << endl;
    cin >> p1;
    cout << "Enter second polar coordinate:" << endl;
    cin >> p2;
    // Add the two polar coordinates
    p3 = p1 + p2;
    cout << "Sum of polar coordinates: " << p3 << endl;
    
    return 0;
}