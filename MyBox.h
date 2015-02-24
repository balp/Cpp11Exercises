#ifndef CMYBOX_H
#define CMYBOX_H

#include <cstdint>

class CMyBox
{
    public:
        CMyBox();

        CMyBox(const std::uint8_t size);

        CMyBox(const CMyBox& other);

        CMyBox(CMyBox&& other);

        ~CMyBox();

        void print() const;
        void fill() const;

    private:

        std::uint32_t * _p_data;
        std::uint8_t _size;
};

#endif // CMYBOX_H
