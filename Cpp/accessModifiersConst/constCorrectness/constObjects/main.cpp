#include<iostream>

class Foo
{
private:
    int bar_;
    
public:
    Foo(int bar_ = 0);
    ~Foo();

    int bar()const { return bar_;}

    void whatever(const Foo& foo);
};

Foo::Foo(int bar_)
{
    std::cout <<"Calling bar_" <<std::endl;
}

Foo::~Foo()
{
}
void Foo::whatever(const Foo& foo)
{
    foo.bar();

}

int main()
{
    Foo foo;
    foo.whatever(foo);
    
}