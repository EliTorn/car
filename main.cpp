
#include "MyCar.h"
#include "ManageCars.h"

int main() {
    ManageCars cars;
    MyCar c1;
    cars.addCar(c1);
    cars.printAll();
    return 0;
}
