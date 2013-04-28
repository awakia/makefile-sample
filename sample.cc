#include <string>

#include "sample.h"

using namespace std;

namespace ns {

Sample::Sample(const string& str, int num) :
    str_(str),
    num_(num) {}

Sample::Sample(const Sample& sample) :
    str_(sample.str()),
    num_(sample.num()) {}

string Sample::str() const {
  return str_;
}

int Sample::num() const {
  return num_;
}

}
