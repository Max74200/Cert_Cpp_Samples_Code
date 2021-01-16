// EXP51-CPP: Compliant Solution
struct Base {
  virtual ~Base() = default;
};

struct Derived final : Base {};

void f() {
   Derived *b = new Derived[10];
   // ...
   delete [] b;
}
