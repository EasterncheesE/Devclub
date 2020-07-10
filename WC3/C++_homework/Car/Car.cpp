#include "Point.h"
#include "Car.h"

Car::Car(double capacity, double consumption, const Point& location, const std::string& model) {
    this->fuelAmount = 0;
    this->fuelCapacity = capacity;
    this->fuelConsumption = consumption;
    this->location = location;
    this->model = model;
}
Car::~Car() {}

double Car::getFuelAmount() const {
    return this->fuelAmount;
}
double Car::getFuelCapacity() const {
    return this->fuelCapacity;
}
double Car::getFuelConsumption() const {
    return this->fuelConsumption;
}
const Point& Car::getLocation() const {
    return this->location;
}
const std::string& Car::getModel() const {
    return this->model;
}

void Car::drive(const Point& destination) {
    double fuelNeeded = this->location.Point::distance(destination) * this->getFuelConsumption();

    if ( this->fuelAmount < fuelNeeded ) {
        throw OutOfFuel();
    } else {
        this->location = destination;
        this->fuelAmount -= fuelNeeded;
        std::cout << "Car has arrived to " << destination << std::endl;
    }
}
void Car::drive(double x, double y) {
    Point destination = Point(x,y);
    
    this->drive(destination);
}

void Car::refill(double fuel) {
    if ( fuel < 0 ) {
        fuel = 0;
    }
    if ( this->fuelAmount + fuel > this->fuelCapacity ) {
        this->fuelAmount = this->fuelCapacity;
        throw ToMuchFuel();
    } else {
        this->fuelAmount += fuel;
    }
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << "Car model is " << car.getModel() << std::endl << "Current fuel = " << car.getFuelAmount() << "/" << car.getFuelCapacity() << std::endl << "Fuel consumption = " << car.getFuelConsumption() << std::endl << "Car location = " << car.getLocation();
    return out;
}
