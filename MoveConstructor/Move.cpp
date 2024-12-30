#include "Move.h"

// Parameterized constructor
Move::Move(int d) {
    std::cout << "Constructor of " << d << std::endl;
    data = new int;  // Allocate memory
    *data = d;       // Assign value
}

// Deep copy constructor
Move::Move(const Move& src) {
    if (src.data != nullptr) {
        std::cout << "Copy Constructor for " << *src.data << std::endl;
        data = new int;   // Allocate memory
        *data = *src.data;  // Copy the value
    } else {
        data = nullptr;   // Handle nullptr case
    }
}

// Move constructor
Move::Move(Move&& src) noexcept {
    if (src.data != nullptr) {
        std::cout << "Move Constructor for " << *src.data << std::endl;
    } else {
        std::cout << "Move Constructor for nullptr" << std::endl;
    }
    data = src.data;  // Take ownership of the resource
    src.data = nullptr;  // Nullify the source to avoid double deletion
}

// Destructor
Move::~Move() {
    if (data != nullptr) {
        std::cout << "Destructor of " << *data << std::endl;
        delete data;  // Free allocated memory
    } else {
        std::cout << "Destructor of nullptr" << std::endl;
    }
}

// Getter
int Move::get_data_value() const {
    if (data != nullptr) {
        return *data;  // Return the value pointed to
    }
    return 0;  // Return a default value if data is nullptr
}

// Setter
void Move::set_data_value(int d) {
    if (data != nullptr) {
        *data = d;  // Update the value
    } else {
        data = new int(d);  // Allocate memory and set the value if data is null
    }
}
