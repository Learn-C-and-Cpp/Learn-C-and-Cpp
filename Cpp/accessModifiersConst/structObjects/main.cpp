#include<iostream>
#include<cstdint>

int getSize()
{
    return sizeof(int);
}

struct CustomType
{
    uint32_t v0 = 5;
    uint32_t v1;

};

void update( CustomType& frameStart)
{
    frameStart.v0 = 23;
    std::cout << " v0 " << frameStart.v0 << std::endl;
    
}

int main()
{
     CustomType ct;
     update(ct); 
    
    
    
}