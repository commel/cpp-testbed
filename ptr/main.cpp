#include <iostream>
#include <functional>
#include <string>
#include <memory>

using namespace std;

class Car {
  string color;
  string manufacturer;
public:
  Car(string);
  ~Car();
  void setColor(string);
  string getColor();
  string getManufacturer();
};

Car::Car(string manufacturer) {
  this->manufacturer = manufacturer;
}

Car::~Car() {}

void Car::setColor(string color) {
  this->color = color;
}

string Car::getColor() {
  return color;
}

string Car::getManufacturer() {
  return manufacturer;
}

void colorize(shared_ptr<Car> c) {
  c->setColor("yellow");
  cout << c.get() << endl;
}

int main() {
  shared_ptr<Car> c = make_shared<Car>("Audi");
  colorize(c);

  cout << c->getManufacturer() << " " << c->getColor() << endl;
  cout << c.get() << endl;
  return 0;
}
