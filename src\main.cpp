#include <iostream>
#include <string>

#include <cstdlib>

using namespace std;

int     main() {
  string input;

  while(cin >> input) {
    if (!input.compare("exit")) return (EXIT_SUCCESS);
  }
  return (EXIT_FAILURE);
}
