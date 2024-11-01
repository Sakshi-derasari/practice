#include <iostream>
#include <string>
using namespace std;

// Base class
class Vehicle {
protected:
    string color;
    int max_speed;
    public:
    Vehicle(string c, int s) : color(c), max_speed(s) {}

    void displayVehicleInfo() {
        cout << "Color: " << color << endl;
        cout << "Max Speed: " << max_speed << " km/h" << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
    int number_of_doors;
    public:
    Car(string c, int s, int doors) : Vehicle(c, s), number_of_doors(doors) {}
    void displayCarInfo() {
        displayVehicleInfo();  // Call base class function
        cout << "Number of Doors: " << number_of_doors << endl;
    }
};

int main() {
  
    Car myCar("Red", 220, 4);
    myCar.displayCarInfo();
}