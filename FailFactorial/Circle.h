#pragma once
#include "Shape.h"
class Circle : public Shape {
public:
    Circle(float r) { m_radius = r; }//added semicolon
    ~Circle() {}

    float Area() override {
        return 3.14f * m_radius * m_radius;
    }

    void SetRadius(float radius) { m_radius = radius; } // removed const keyword, changed where it sends the new radius value
    float GetRadius() const { return m_radius; } // made const

private:
    float m_radius;
};

