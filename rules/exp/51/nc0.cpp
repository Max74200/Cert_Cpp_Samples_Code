// EXP51-CPP: Noncompliant Code Example
struct Base {
  virtual ~Base() = default;
};

struct Derived final : Base {};

void f() {
   Base *b = new Derived[10];
   // ...
   delete [] b;
}
