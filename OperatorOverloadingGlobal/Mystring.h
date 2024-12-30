#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend bool operator==(const Mystring&lhs,const Mystring&rhs);
    friend Mystring operator+(const Mystring&lhs,const Mystring&rhs);
    friend Mystring operator-(const Mystring&obj);

    friend std::ostream& operator<<(std::ostream&os,const Mystring&rhs); //insertion
    friend std::istream& operator>>(std::istream&os,Mystring&rhs);  //extraction

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                            // No-args contstructor
    Mystring(const char *s);                         // Overloaded contstructor              
    Mystring(const Mystring &source);        // Copy constructor
    ~Mystring();                                          // Destructor
    Mystring& operator=(const Mystring&rhs);   //copy assignment
    Mystring& operator=(Mystring&&rhs);   //move assignment


    
    void display() const;
    int get_length() const;                           // getters
    const char *get_str() const;
  
};

#endif // _MYSTRING_H_