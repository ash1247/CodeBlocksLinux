#include <bits/stdc++.h>

template<typename T>
class Vector{

    int sz;
    T* elem;
    int space;

public:
    Vector() : sz{0}, elem{nullptr}, space{0} { }
    explicit Vector(int s) : sz{s}, elem{new T[s]}, space{s}
    {
        for(int i=0; i<sz;i++) elem[i]=0;
    }

    Vector(const Vector&);
    Vector& operator=(const Vector&);

    Vector(Vector&&);

    ~Vector() { delete[] elem};

    T& operator[](int n) { return elem[n]; }
    const T& operator[](int n) const{ return elem[n]; }

    int size() const { return sz; }
    int capacity() const { return space; }

    void resize(int newsize);
    void push_back(const T& d);
    void reserve(int newalloc);

}

vector& vector::operator(const vector& a)
{
    if(this==&a) return *this;

    if(a.sz<=space) {
        for(int i = 0; i<a.sz;i++)
            elem[i]=a.elem[i];
            sz=a.sz;
            return *this;
    }

    double* p = new double[a.sz];
    for(int i = 0; i < a.sz; i++)
        p[i] = a.elem[i];
        delete[] elem;
        space=sz=a.sz;
        elem = p;
        return *this;
}
int main(void)
{

}


