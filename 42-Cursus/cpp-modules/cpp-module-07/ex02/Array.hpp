#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
    private:
        T *arr;
        unsigned int _size;
    public:
        Array(){
            arr = new T[0];
            _size = 0;
        }
        ~Array(){
            delete[] arr;
        }
        Array(unsigned int n){
            arr = new T[n];
            _size = n;
        }
        Array(const Array &oth)
        {
            arr = NULL;
            (*this) = oth;
        }
        Array &operator=(const Array &oth)
        {
            if(arr)
                delete[] arr;
            _size = oth._size;
            arr = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                arr[i] = oth.arr[i];
        }
        T &operator[](unsigned int n)
        {
            if (n >= _size || n < 0)
                throw std::exception();
            return arr[n];
        }
        unsigned int size()
        {
            return _size;
        }
};

#endif
