#include <iostream>

void f1(void);
void f2(void);
void f3(void);

class BackTrace {
public:
  BackTrace(std::string name) : name(name) {
    std::cout << "enter  " << name << "\n";
  }
  ~BackTrace() { std::cout << "exit  " << name << "\n"; }

private:
  std::string name;
};

void f1(void) {
  BackTrace b(__func__); // create instance of the class
  f2();
}
void f2(void) {
  BackTrace b(__func__);
  f3();
}
void f3(void) { BackTrace b(__func__); }
int main() {
  BackTrace b(__func__);
  f1();
}