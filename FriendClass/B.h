#ifndef _B_H_
#define _B_H_

#include <string>
#include <iostream>

class A; // Forward declaration

class B {
private:
    std::string name;
    int age;
    static int count;

public:
    B();                      // Constructor
    ~B();                     // Destructor
    void get_name() const;    // Getter for name
    void set_name(std::string name);  // Setter for name
    static void get_count();  // Static method to get object count
    void ruin_A(A &src);      // Friend method to ruin A
};

#endif
