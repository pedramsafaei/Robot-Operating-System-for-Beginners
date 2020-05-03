#include <iostream>

using namespace std;

namespace robot
{
  void process(void)
  {
    cout << "Processing by Robot" << endl;
  }
} // namespace robot
namespace machine
{
  void process(void)
  {
    cout << "Processing by Machine" << endl;
  }
} // namespace machine

int main()
{
  robot::process();
  machine::process();
}