
#include "ManageCars.h"

MyCar *ManageCars::getCars() const {
    return _cars;
}

void ManageCars::setCars(MyCar *cars) {
    _cars = cars;
}

int ManageCars::getSize() const {
    return size;
}

void ManageCars::setSize(int size) {
    ManageCars::size = size;
}

ManageCars::ManageCars() {  // Constractor
    cout << "This cars is build !!" << endl;
    this->_cars = NULL;
    this->size = 0;
}

ManageCars::~ManageCars() { // disContractor
    delete[]_cars;
    cout << "This car is Destroyed!!" << endl;
}

void ManageCars::addCar(MyCar other) {
    this->_cars[size] = other;
    this->setCars(_cars);
    this->setSize(size++);
}

void ManageCars::removeCar(int licenseNumber) {
    for (int i = 0; i < size; i++) {
        if (this->_cars[i].getLicenseNumber() == licenseNumber) { // [1,2,4,2]
            this->_cars[i] = this->_cars[size - 1];
            size--;
        }
    }
}


MyCar *ManageCars::CarsFromToYears(int fromYear, int toYear) {
    MyCar *newCars;
    for (int i = 0; i < size; i++) {
        if (this->_cars[i].getYear() >= fromYear && this->_cars[i].getYear() <= toYear) {
            newCars[i] = this->_cars[i];
        }
    }
    return newCars;
}


MyCar *ManageCars::CarsFromToPrices(int fromPrice, int toPrice) {
    MyCar *newCars;
    for (int i = 0; i < size; i++) {
        if (this->_cars[i].getPrice() >= fromPrice && this->_cars[i].getPrice() <= toPrice) {
            newCars[i] = this->_cars[i];
        }
    }
    return newCars;
}

void ManageCars::printCar(int licenseNumber) {
    for (int i = 0; i < size; i++) {
        if (this->_cars[i].getLicenseNumber() == licenseNumber) {
            this->_cars[i].print();
        }
    }
}

void ManageCars::deleteAll() {
    this->_cars = NULL;
    this->size = 0;
}

void ManageCars::printAll() {
    cout << "Print all cars:::" << endl;
    for (int i = 0; i < size; i++) {
        this->_cars[i].print();
    }
}
