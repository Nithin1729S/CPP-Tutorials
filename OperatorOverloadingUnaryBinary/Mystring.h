#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                            // No-args contstructor
    Mystring(const char *s);                         // Overloaded contstructor              
    Mystring(const Mystring &source);        // Copy constructor
    ~Mystring();                                          // Destructor
    Mystring& operator=(const Mystring&rhs);   //copy assignment
    Mystring& operator=(Mystring&&rhs);   //move assignment

    Mystring operator-()const;   
    Mystring operator+(const Mystring&rhs)const;
    bool operator==(const Mystring&rhs) const;
    
    void display() const;
    int get_length() const;                           // getters
    const char *get_str() const;
  
};

#endif // _MYSTRING_H_