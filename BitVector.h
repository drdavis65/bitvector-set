#include <vector>
#include <iostream>
#include <string>
#include <cmath>
#include <unordered_map>
#include <cstdint>

class BitVector {
private:
  static constexpr int WORDSIZE = 32;
  static constexpr int BITS_WS = 5;
  static constexpr uint32_t MASK = 0x1f;
  std::unordered_map<std::string, int> vars;
  std::vector<std::vector<uint32_t>> vec;

public:
  BitVector(const std::vector<std::string> variables) {
    size_t n = variables.size();
    size_t vec_size;
    for (size_t i = 0; i < n; ++i) {
      vars[variables[i]] = i;
    }
    vec_size = (n + WORDSIZE - 1) >> BITS_WS;
    vec.resize(vec_size, std::vector<uint32_t>(vec_size, 0));
  }


};
