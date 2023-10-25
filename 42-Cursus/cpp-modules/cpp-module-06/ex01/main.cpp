#include "Serializer.hpp"

int main(void)
{
    Data before;
    Data *after;

    before.num = 10;
    before.str = "Hello World!";
    std::cout << "before address: " << &before << std::endl;
    std::cout << "before text: " << before.str << std::endl;
    std::cout << "before number: " << before.num << std::endl;

    std::cout << "---------------------------------------------------" << std::endl;

    uintptr_t val = Serializer::serialize(&before);
    after = Serializer::deserialize(val);
    std::cout << "after address: " << after << std::endl;
    std::cout << "after text: " << after->str << std::endl;
    std::cout << "after number: " << after->num << std::endl;
    return 0;
}

