#pragma once
template<typename T, typename U>
class TemplateClass
{
private:
	T x;
	U y;
public:
	TemplateClass() : x('z'), y(0) {}
	TemplateClass(T x, T y) : x(x), y(y) {}
};

template<typename R>
class Array
{
private:
		R m_elements[10];
public:
	R operator [] (int index) { return m_elements[index]; }

};