#ifndef A_H
#define A_H

#include <string>
#include <iostream>
#include "B.h" // Include only header, not cpp

class A {
private:
    std::string name;
    int age;
    static int count;
    friend void B::ruin_A(A &src);

public:
    A();                      // Constructor
    ~A();                     // Destructor
    void get_name() const;    // Getter for name
    void set_name(std::string name);  // Setter for name
    static void get_count();  // Static method to get object count
};

#endif
