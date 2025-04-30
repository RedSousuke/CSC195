// StopMakingMoreProjectsHere.cpp
#define _DBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

#include <memory>
#include <iostream>
#include "TemplateClass.h"
using namespace std;

namespace local
{
}
template<typename T>
class smart_ptr

{

public:

    smart_ptr({}

    smart_ptr(const smart_ptr&) = delete;

    smart_ptr& operator = (const smart_ptr&) = delete;

    ~smart_ptr() {}

    T& operator * () { return *_ptr; }

    T* operator & () { return  _ptr; }

    T* operator -> () { return  _ptr; }

    T* get() { return _ptr; }

private:

    T* _ptr{};

};
int main()
{
    
    {
        smart_ptr<int> sp{ new int {25} };
    }
    _CrtDumpMemoryLeaks();
}