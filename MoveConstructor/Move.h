#pragma once
#include <iostream>

class Move {
private:
    int* data;  // Pointer to dynamically allocated memory
public:
    void set_data_value(int d);
    int get_data_value() const;

    // Constructors and Destructor
    Move(int d);                  // Parameterized constructor
    Move(const Move& src);        // Deep copy constructor
    Move(Move&& src) noexcept;    // Move constructor (declared noexcept)
    ~Move();                      // Destructor
};
