#include <list>

class StackEmpty : public std::exception {
 public:
  const char* what() const throw() { return "Stack is empty"; }
};

class StackTooShort : public std::exception {
 public:
  const char* what() const throw() { return "Not enough elements in stack"; }
};
class MyStack {
 private:
  std::list<int> stack_a;
  std::list<int> stack_b;

 public:
  // Méthodes pour set et get stack_a
  void set_stack_a(std::list<int> stack_a) { this->stack_a = stack_a; }
  std::list<int> get_stack_a() { return stack_a; }

  // Méthodes pour set et get stack_b
  void set_stack_b(std::list<int> stack_b) { this->stack_b = stack_b; }
  std::list<int> get_stack_b() { return stack_b; }

  // Méthodes pour accéder aux éléments de stack_a
  int front_a() {
    if (stack_a.empty()) throw StackEmpty();

    return stack_a.front();
  }
  int back_a() {
    if (stack_a.empty()) throw StackEmpty();

    return stack_a.back();
  }

  // Méthodes pour accéder aux éléments de stack_b
  int front_b() {
    if (stack_b.empty()) throw StackEmpty();

    return stack_b.front();
  }
  int back_b() {
    if (stack_b.empty()) throw StackEmpty();

    return stack_b.back();
  }

  // Méthodes pour intervertir les deux premiers éléments de stack_a et stack_b
  void sa() {
    if (stack_a.empty()) throw StackEmpty();

    if (stack_a.size() == 1) throw StackTooShort();

    if (stack_a.size() > 1) {
      std::swap(stack_a.front(), *(++stack_a.begin()));
    }
  }

  void sb() {
    if (stack_b.empty()) throw StackEmpty();

    if (stack_b.size() == 1) throw StackTooShort();

    if (stack_b.size() > 1) {
      std::swap(stack_b.front(), *(++stack_b.begin()));
    }
  }

  // Méthodes pour déplacer le premier élément de stack_b sur stack_a et vice
  // versa
  void pa() {
    if (stack_a.empty()) throw StackEmpty();

    stack_b.push_front(stack_a.front());
    stack_a.pop_front();
  }
  void pb() {
    if (stack_b.empty()) throw StackEmpty();

    stack_a.push_front(stack_b.front());
    stack_b.pop_front();
  }

  // Méthodes pour faire une rotation de stack_a et stack_b sur un élément
  void ra() {
    if (stack_a.empty()) throw StackEmpty();

    if (stack_a.size() == 1) throw StackTooShort();

    stack_a.splice(stack_a.end(), stack_a, stack_a.begin());
  }
  void rb() {
    if (stack_b.empty()) throw StackEmpty();

    if (stack_b.size() == 1) throw StackTooShort();

    stack_b.splice(stack_b.end(), stack_b, stack_b.begin());
  }

  // Méthodes pour faire une rotation inverse de stack_a et stack_b sur un
  // élément
  void rra() {
    if (stack_a.empty()) throw StackEmpty();

    if (stack_a.size() == 1) throw StackTooShort();

    stack_a.splice(stack_a.begin(), stack_a, --stack_a.end());
  }
  void rrb() {
    if (stack_b.empty()) throw StackEmpty();

    if (stack_b.size() == 1) throw StackTooShort();

    stack_b.splice(stack_b.begin(), stack_b, --stack_b.end());
  }
};
// Exceptions
