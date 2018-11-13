#include <iostream>


class Console {
private:
    //none

public:
    Console() = default;

    void log( void ) {}

    template<typename T , typename... Types>
    void log(T const& arg ,Types const&...  args)
    {
        std::cout << arg << "\n";
        log(args...);
    }
};