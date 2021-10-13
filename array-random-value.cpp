#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{
  int i, min_value, max_value;
  int list[10];

  for(i=0; i<10; i++) list[i] = rand();

  // find minimum value
  min_value = list[0];
  for(i=1; i<10; i++)
     if(min_value > list[i]) min_value = list[i];

  cout << "minimum value: " << min_value << '\n';

  // find maximum value
  max_value = list[0];
  for(i=1; i<10; i++)
     if(max_value < list[i]) max_value = list[i];

  cout << "maximum value: " <<  max_value << '\n';

  return 0;
}
