// EXP58-CPP: Compliant Solution
#include <cstdarg>
#include <iostream>
 
extern "C" void f(int *a, ...) {
  va_list list;
  va_start(list, a);
  if (a && *a) {
    std::cout << a << ", " << va_arg(list, int);
    *a = 100; // Assign something to *a for the caller
  }
  va_end(list);
}
