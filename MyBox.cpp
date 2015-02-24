#include <iostream>
#include "MyBox.h"

#define DEFAULT_SIZE 5

CMyBox::CMyBox()
    : _p_data(NULL),
    _size(0)
{
    // TODO: Let this constructor reference the other one
    std::cout << "Default Constructor Called" << std::endl;
}

CMyBox::CMyBox(const std::uint8_t size)
{
    // TODO: Initialize your data
    std::cout << "Constructor Called" << std::endl;
}

CMyBox::CMyBox(const CMyBox& other)
{
    // TODO: Implement the copy constructor
    std::cout << "Copy Called" << std::endl;
}

CMyBox::CMyBox(CMyBox&& other)
{
    // TODO: Implement the move constructor
    std::cout << "Move Called" << std::endl;
}

CMyBox::~CMyBox()
{
    // TODO: Implement the destructor
    std::cout << "Destructor Called" << std::endl;
}

void CMyBox::fill() const
{
    /* // TODO Uncomment when you're done
    for (auto i = 0; i < _size; ++i)
    {
        _p_data[i] = std::rand() % _size;
    }
    */
}

void CMyBox::print() const
{
    /* // TODO Uncomment when you're done
    std::cout << "Box contents:" << std::endl;
    for (auto i = 0; i < _size; i++)
    {
        std::cout << "Position:" << i << " Value:" << _p_data[i] << " Address:" << &_p_data[i] << std::endl;
    }
    std::cout << "End---" << std::endl;
    */
}

