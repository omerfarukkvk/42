#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
    std::string str;
    int         num;
};

class Serializer
{
    public:
        Serializer();
        ~Serializer();
        Serializer(const Serializer &oth);
        Serializer &operator=(const Serializer &oth);

        static uintptr_t serialize(Data *ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif