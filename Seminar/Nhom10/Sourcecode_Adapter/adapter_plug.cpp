#include <iostream>
#include <string>
using namespace std;

class Plug_2
{
public:
    virtual int numPin()
    {
        return 0;
    }
    virtual string namePlug()
    {
        return "";
    }
};

class twoPin : public Plug_2
{
public:
    int numPin()
    {
        return 2;
    }
    string namePlug()
    {
        return "two_pin plug!";
    }
};

class Plug_3
{
public:
    virtual int numPin()
    {
        return 0;
    }
    virtual string namePlug()
    {
        return "";
    }
};

class threePin : public Plug_3
{
public:
    int numPin()
    {
        return 3;
    }
    string namePlug()
    {
        return "three_pin plug!";
    }
};

class Adapter : public Plug_2
{
public:
    Adapter(Plug_3* plug) {}
    Adapter(Plug_2* plugg) {}

    int numPin()
    {
        return 2;
    }
    string namePlug()
    {
        return "two_pin plug!";
    }
};

int main()
{
    Plug_2* plug2 = new twoPin();
    Plug_3* plug3 = new threePin();

    Plug_2* adapter = new Adapter(plug2);
    cout << adapter->numPin();

    return 0;
}



