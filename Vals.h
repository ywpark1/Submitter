#ifndef SICT_VALS_H_
#define SICT_VALS_H_

#include <fstream>
#include <string>
#include <vector>

namespace sict{
  // a class to parse and hold delimeter seperated values
  // a delimeter can not be a white space character
  class Vals :public std::string{
    std::string _nothing;
    char _delim;
    std::vector<std::string> _values;
    void set();
    static std::string trim(std::string s);
  public:
    void set(const char* str, char delim = 0);
    void set(char delim );
    int size();
    Vals(char delimeter = ',');
    Vals(std::string csv, char delimeter);
    std::string& operator[](int index);
    void clear();
  };
  std::ifstream& operator>>(std::ifstream& ifstr, Vals& V);
}

#endif