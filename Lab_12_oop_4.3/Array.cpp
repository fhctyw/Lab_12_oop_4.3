#include "Array.h"

unsigned int Array::maxSize = 5;

Array::Array(unsigned int size, unsigned char ch, unsigned int ms)
{
    setMaxSize(ms);
    this->size = size <= getMaxSize() ? size : 0;
    arr = new unsigned char[getMaxSize()];
    for (size_t i = 0; i < this->size; i++)
        arr[i] = ch;

}

const unsigned char& Array::operator[](int i) const
{
    return rangeCheck(i) ? arr[i] : arr[0];
}

unsigned char& Array::operator[](int i)
{
    return rangeCheck(i) ? arr[i] : arr[0];
}

bool Array::rangeCheck(int i) const
{
    return i >= 0 && i < size;
}

void Array::add(unsigned char ch)
{
    size += size < getMaxSize() - 1;
    if (rangeCheck(size - 1))
        arr[size-1] = ch;
}

ostream& Array::print(ostream& out) const
{
    char* tmp = new char[size + 1];
    memcpy_s(tmp, size, arr, size);
    tmp[size] = '\0';
    out << string(tmp);
    delete[] tmp;
    return out;
}

