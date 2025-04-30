#pragma once

class Shape {
public:
    Shape() {}
    ~Shape() {}

    float virtual Area() { return 2.0f; }; // added virtual keyword and function brackets to remove green underline. added return
};


