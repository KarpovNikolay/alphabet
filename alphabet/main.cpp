#include <iostream>
#include <array>

using namespace std;
struct symbol
{
private:
    array<string, 5> graphics;
public:
    symbol(string i1,string i2,string i3,string i4,string i5)
    {
    graphics[0]=i1;
    graphics[1]=i2;
    graphics[2]=i3;
    graphics[3]=i4;
    graphics[4]=i5;
}
    string getline(int i)
    {
        return graphics[i];
    }
};
struct screen
{
private:
    array<string, 5> graphics;
public:
    void add(symbol toadd)
    {
    for(int i(0);i<5;i++)
        graphics[i]+=toadd.getline(i);
    }
    void print()
    {
    for(auto i:graphics)
        cout<<i<<endl;
    }
};

screen mainscreen;

int main()
{
symbol p ("____ ", "|   \\", "|___/", "|    ", "|    ");
    return 0;
}
