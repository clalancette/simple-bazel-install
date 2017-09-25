#include <cassert>

#include "hello-lib.hh"

int main(void)
{
  std::string x = get_hello_world();

  assert(x == "Hello world");

  return 0;
}
