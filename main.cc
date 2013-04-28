#include <iostream>

#include "sample.h"
#include "hello_world.h";

using namespace std;

int main() {
  cout << "Hello Makefile!" << endl;

  ns::Sample data = ns::Sample("abc", 1);
  cout << data.str() << data.num() << endl;

  cout << hello_world() << endl;

  return 0;
}
