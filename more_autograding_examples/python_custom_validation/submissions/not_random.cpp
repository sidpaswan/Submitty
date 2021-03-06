#include <iostream>
#include <cassert>
#include <random>

int main(int argc, char* argv[]) {

  // this program requires 1 argument, a positive integer
  assert (argc == 2);
  int num = atoi(argv[1]);
  assert (num >= 1);

  // we generate the specified number of random numbers, 
  // printing them to STDOUT as we go
  int total = 0;
  for (int i=0; i<num; ++i) {

    int r = i+3;   // BUG!  WILL ALWAYS BE THE SAME SEQUENCE

    total += r;
    std::cout << r << std::endl;
  }

  // and we also print the sum
  std::cout << "total = " << total << std::endl;
}
