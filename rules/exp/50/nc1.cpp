// EXP50-C: Noncompliant Code Example
extern void func(int i, int j);
 
void f(int i) {
  func(i++, i);
}
