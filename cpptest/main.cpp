#include <iostream>
#include <string>
#include <functional>
#include <algorithm>
#include <vector>

using namespace std;

typedef function<void(string)> STRING_FUNC;

class Sayer {
  public:
    void say(STRING_FUNC func, vector<string> data) {
      for (auto &d : data) {
	func(d);
      }
    }
};

int main() {
  vector<string> words;
  words.push_back("Hallo");
  words.push_back("Welt");
  words.push_back("wie");
  words.push_back("gehts");

  Sayer s;
  s.say( [](string text) { cout << text << endl; }, words );
}
