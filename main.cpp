

#include "console.hpp"

int main( void )
{
    Console console{};

    std::string name{ "your name " };
    unsigned int int_number = 12;
    long long_number = 2'000'000'000'000;

    console.log(name , int_number , long_number);
    return 0;
}
