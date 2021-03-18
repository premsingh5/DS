#include <iostream>       // std::cout
#include <queue>          // std::priority_queue
#include <string>        // std::string
using namespace std;
int main ()
{
  priority_queue<string> mypq;

  mypq.emplace("orange");
  mypq.emplace("strawberry");
  mypq.emplace("apple");
  mypq.emplace("pear");

  cout << "mypq contains:";
  while (!mypq.empty())
  {
     cout << ' ' << mypq.top();
     mypq.pop();
  }
  cout << '\n';

  return 0;
}
