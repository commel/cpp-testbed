#include <iostream>
#include "types.h"

using namespace std;

First::First() {
  cout << "first constructed" << endl;
};

First::First(string text) {
  cout << text << endl;
};

First::~First() {
  cout << "first destructed" << endl;
};

Second::Second() {
  cout << "second constructed" << endl;
};

Second::Second(string text) : First::First(text) {
};

Second::~Second() {
  cout << "second destructed" << endl;
};

void First::one() const {
  cout << "one" << endl;
};

void Second::two() const {
  cout << "two" << endl;
};
