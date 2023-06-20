
#ifndef CAR_MANAGECARS_H
#define CAR_MANAGECARS_H
#include "MyCar.h"
using namespace std;
#include <iostream>

class ManageCars {
private:
    MyCar * _cars;
    int size;
public:
    MyCar *getCars() const;

    void setCars(MyCar *cars);

    int getSize() const;

    void setSize(int size);

public:
    ManageCars();
    ~ManageCars();
    void addCar(MyCar other);
    void removeCar(int licenseNumber);
    MyCar *CarsFromToYears(int fromYear, int toYear);
    MyCar *CarsFromToPrices(int fromPrice, int toPrice);
    void printCar(int licenseNumber);
    void deleteAll();
    void printAll();
};


#endif //CAR_MANAGECARS_H
