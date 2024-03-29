// Name     : Inheritance.cpp

#include <iostream>
using namespace std;

class Machine {
private:
    int id;

public:
    Machine(): id(0) { cout << "Machine no-argument constructor called." << endl; }
    Machine(int id): id(id) { cout << "Machine parameterized constructor called." << endl; }
    void info() { cout << "ID: " << id << endl; }
};

class Vehicle: public Machine {
public:
    Vehicle(int id): Machine(id) { cout << "Vehicle parameterized constructor caller." << endl; }
    Vehicle() { cout << "Vehicle no-argument constructor called." << endl; }
};

class Car: public Vehicle {
public:
    Car(): Vehicle(999) { cout << "Car no-argument constructor caller." << endl; }
};

int main() {

    Vehicle vehicle(123);
    vehicle.info();

    Car car;
    car.info();

    Machine machine(123);
    machine.info();

    return 0;
}
