#include <iostream>
#include <string>
#include <unordered_set>

int main ()
{
  std::unordered_multiset<std::string> myums =
    {"CSS","HTML","Java","CSS","SQL","Ruby","SQL","C++"};

  for (auto& x: {"CSS","SQL","Java"}) {
    std::cout << x << ": " << myums.count(x) << std::endl;
  }

  return 0;
}
