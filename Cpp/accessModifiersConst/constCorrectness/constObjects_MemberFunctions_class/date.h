#ifndef DATE_H
#define DATE_H

class Date {
 private:
  int y{};
  int m{};
  int d{};

 public:
  Date();
  Date(int y_vale, int m_vale, int d_vale);
  ~Date();
  void print() const;
  void print();

  /** Create object by passing an object to
   * function by const reference
   */

  void doSomething(const Date& date) const;
};

#endif