#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
  int hrs, mins;
  float secs;
  string s;

  hrs = seconds / 3600;
  mins = (seconds / 3600.0 - hrs) * 60;
  secs = ((seconds / 3600.0 - hrs) * 60.0 - mins) * 60;

  s = (hrs>9 ? "":"0")+std::to_string(hrs) + ":" + std::to_string(mins) + ":" + std::to_string((int)secs);

  return s;
}