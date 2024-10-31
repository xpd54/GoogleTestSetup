#include <vector>

class Stack {
public:
  void push(const int num);
  void pop();
  int top() const;
  bool empty() const;

private:
  std::vector<int> holding;
};