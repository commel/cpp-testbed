class Base {
  virtual void one() const = 0;
  virtual void two() const = 0;
};

using namespace std;

class First : public Base {
  public:
    First();
    First(string text);
    ~First();
    void one() const override;
};

class Second : public First {
  public:
    Second();
    Second(string text);
    ~Second();
    void two() const override;
};
