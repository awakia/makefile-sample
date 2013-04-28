#ifndef MAKEFILE_SAMPLE_H_
#define MAKEFILE_SAMPLE_H_

#include <string>

namespace ns {

class Sample {
 public:
  Sample(const std::string& str, int num);
  Sample(const Sample& sample);
  std::string str() const;
  int num() const;

 private:
  const std::string str_;
  const int num_;
};

}

#endif  // MAKEFILE_SAMPLE_H_
