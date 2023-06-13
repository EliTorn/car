
#ifndef CAR_MYCAR_H
#define CAR_MYCAR_H

#include <iostream>
using namespace std;


class MyCar {
private:
    int _licenseNumber;  // מספר רישוי
    char * _model;       // מודל
    double _price;       //מחיר
    int _year;           //שנה
    char * _color;     // צבע
    int _engineCapacity; // קיבולת מנוע
    char * _gearType;   // סוג גיר
    char * _creatureLand; // ארץ יצור
    int _hand;   // יד

public:
    void
    setCar(int licenseNumber, char * _model, double price, int year, char * color, int engineCapacity, char * gearType,
           char * creatureLand, int hand);

    int getLicenseNumber() const;

    void setLicenseNumber(int licenseNumber);

    char *getModel() const;

    void setModel(char *model);
    char *getColor() const;

    void setColor(char *color);

    void setGearType(char *gearType);

    char *getGearType() const;

    char *getCreatureLand() const;

    void setCreatureLand(char *creatureLand);


    double getPrice() const;

    void setPrice(double price);

    int getYear() const;

    void setYear(int year);
    int getEngineCapacity() const;
    void setEngineCapacity(int engineCapacity);
    int getHand() const;

    void setHand(int hand);

    void getCar();

    MyCar();

    ~MyCar();

    void print() const;

    bool compare(MyCar &car) const;
};


#endif //CAR_MYCAR_H
