#include <iostream>
#include <array>

using namespace std;

struct symbol
{
  private:
      array<string, 5> graphics;
  public:
      symbol(string m1, string m2, string m3, string m4, string m5)
      {
          graphics[0] = m1;
          graphics[1] = m2;
          graphics[2] = m3;
          graphics[3] = m4;
          graphics[4] = m5;
      }
      string getline(int m)
      {
          return graphics[m];
      }
};
struct screen
{
  private:
    array<string, 5> graphics;
  public:
    void add(symbol toadd)
    {
        for (int i(0); i<5; i++)graphics[i]+=toadd.getline(i);
    }
    void print()
    {
        for(auto i: graphics)cout << i << endl;
    }
};
screen mainscreen;

int main()
{
symbol f("_____","|    ","|----","|    ","|    ");
symbol n("|\\    |","| \\   |","|  \\  |","|   \\ |","|    \\|");
symbol m("|\\  /|","| \\/ |","|    |","|    |","|    |");
symbol b("|---\\ ","|___| ","|    \\","|    |","|____/");
symbol d("____  ","|   \\ ","|    |","|    |","|___/ ");
symbol j("    |","    |","    |","    |"," \\__J");
symbol i("  0  "," ___ ","  |  ","  |  "," _|_ ");
symbol h("|    |","|    |","|----|","|    |","|    |");
symbol e("|----","|    ","|----","|    ","|____");
symbol s(" ____","/    ","\\___ ","    \\","____/");
symbol l("|    ","|    ","|    ","|    ","L____");
symbol z("----/","   / ","  /  "," /   ","/----");
symbol a("/---\\","|   |","|---|","|   |","|   |");
    return 0;
}
