
#include "MyCar.h"

int MyCar::getLicenseNumber() const {
    return _licenseNumber;
}

void MyCar::setLicenseNumber(int licenseNumber) {
    if (licenseNumber < 0) {
        throw invalid_argument("This Number Must be great the 0");
    } else {
        _licenseNumber = licenseNumber;
    }
}


double MyCar::getPrice() const {
    return _price;
}

void MyCar::setPrice(double price) {
    if (price < 0)
        throw invalid_argument("This Number Must be great the 0");
    else {
        _price = price;
    }

}

int MyCar::getYear() const {
    return _year;
}

void MyCar::setYear(int year) {
    if (year < 1950 || year > 2023) {
        throw invalid_argument("This year not updated!!");
    } else {
        _year = year;
    }
}


int MyCar::getEngineCapacity() const {
    return _engineCapacity;
}

void MyCar::setEngineCapacity(int engineCapacity) {
    if (engineCapacity < 800) {
        throw invalid_argument("engine toDay must be great than 800");
    }
    _engineCapacity = engineCapacity;
}


int MyCar::getHand() const {
    return _hand;
}

void MyCar::setHand(int hand) {
    if (hand < 0) {
        throw invalid_argument("This isn't true!!!");
    }
    _hand = hand;
}

void MyCar::setCar(int licenseNumber, char *model, double price, int year, char *color, int engineCapacity,
                   char *gearType, char *creatureLand, int hand) {
    this->setLicenseNumber(licenseNumber);
    this->setModel(model);
    this->setPrice(price);
    this->setYear(year);
    this->setColor(color);
    this->setEngineCapacity(engineCapacity);
    this->setGearType(gearType);
    this->setCreatureLand(creatureLand);
    this->setHand(hand);
}

void MyCar::getCar() {
    int licenseNumber;
    char *model = new char;
    double price;       //מחיר
    int year;           //שנה
    char *color = new char;     // צבע
    int engineCapacity; // קיבולת מנוע
    char *gearType = new char;
    char *creatureLand = new char;
    int hand;   // יד
    cout << "Enter the license Number (great then 0):" << endl;
    cin >> licenseNumber;
    this->setLicenseNumber(licenseNumber);
    cout << "Enter the model (str)" << endl;
    cin >> model;
    this->setModel(model);
    cout << "Enter the price (must be great than 1)" << endl;
    cin >> price;
    this->setPrice(price);
    cout << "Enter the year (1950-2023)" << endl;
    cin >> year;
    this->setYear(year);
    cout << "Enter the color (str)" << endl;
    cin >> color;
    this->setColor(color);
    cout << "Enter the engine Capacity (great than 800) " << endl;
    cin >> engineCapacity;
    this->setEngineCapacity(engineCapacity);
    cout << "Enter the gear type (str)" << endl;
    cin >> gearType;
    this->setGearType(gearType);
    cout << "Enter the land (str)" << endl;
    cin >> creatureLand;
    this->setCreatureLand(creatureLand);
    cout << "Enter the hand (must be great then 0) " << endl;
    cin >> hand;
    this->setHand(hand);
}

MyCar::MyCar() {
    cout << "This car is READY!!" << endl;
    getCar();
}

MyCar::~MyCar() {
    delete _model;
    delete _color;
    delete _gearType;
    delete _creatureLand;
    cout << "This car is destroyed !!!" << endl;
}

void MyCar::print() const {
    cout << "----------------------------------------------------" << endl;
    cout << "license:: " << this->getLicenseNumber() << endl;
    cout << "model:: " << this->getModel() << endl;
    cout << "price:: " << this->getPrice() << endl;
    cout << "color:: " << this->getColor() << endl;
    cout << "engine Capacity:: " << this->getEngineCapacity() << endl;
    cout << "gear Type:: " << this->getGearType() << endl;
    cout << "creature Land:: " << this->getCreatureLand() << endl;
    cout << "hand :: " << this->getHand() << endl;
    cout << "-------------------------------------------" << endl;
}

bool MyCar::compare(MyCar &car) const {
    return this->getYear() < car.getYear();
}

char *MyCar::getModel() const {
    return _model;
}

void MyCar::setModel(char *model) {
    _model = model;
}

char *MyCar::getColor() const {
    return _color;
}

void MyCar::setColor(char *color) {
    _color = color;
}

void MyCar::setGearType(char *gearType) {
    _gearType = gearType;
}

void MyCar::setCreatureLand(char *creatureLand) {
    _creatureLand = creatureLand;
}

char *MyCar::getGearType() const {
    return _gearType;
}

char *MyCar::getCreatureLand() const {
    return _creatureLand;
}


