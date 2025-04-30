#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
public:
    Rectangle(float w, float h)
    {
        m_width = w;
        m_height = h;
    }

    float Area() override // corrected Areas to Area
    {
        return m_width * m_height;
    }

private:
    float m_width;
    float m_height;
}; // added missing semicolon

