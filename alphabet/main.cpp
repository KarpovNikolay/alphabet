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
/**
1)Äåëàåì áóêâó â áëîêíîòå èëè ãäåòî åù¸
Ïðèìåð:
Áóêâà À
We make a letter in a notebook or somewhere else
Example:
Letter A
/---\
|   |
|---|
|   |
|   |
Îáÿçàòåëüíî òðåáóåòñÿ , ÷òîáû âñå ñòðî÷êè áûëè îäíîé äëèííû , äàæå åñëè ïðèä¸òñÿ ïðîñòî ïîñòàâèòü ïðîáåëû
It is absolutely required that all lines are of the same length , even if you just have to put spaces
2)Óäâàèâàåì \ åñëì îíè åñòü
Double \ if there are any
/---\\
|   |
|---|
|   |
|   |
3)Ñîçäà¸ì ñèìâîë , íàçûâàåì íóæíîé áóêâîé , â ñêîáî÷êè ïèøåì êàæäóþ ñòðîêó ÷åðåç çàïÿòóþ â êàâû÷êàõ
We create a symbol , call it the desired letter , write each line in parentheses separated by commas in quotation marks
symbol a("/---\\","|   |","|---|","|   |","|   |");

4)Ïðîâåðÿåì âûâîä
Checking the output
mainscreen.add(a);
mainscreen.add(a);
mainscreen.print();
Åñëè âûâåëîñü
If you have
/---\/---\
|   ||   |
|---||---|
|   ||   |
|   ||   |
, òî îòëè÷íî.
Óäàëÿåì âñ¸ , ÷òî íàïèñàëè â 4 ïóíêòå è êàìèòèì â ñìàðòãèòå ñ ñîîòâåòñòâóþùèì íàçâàíèåì
that's great.
We delete everything that was written in paragraph 4 and add it to the smartgit with the appropriate name
5)Ïóëèì íà ãèòõàá
Push on github
**/
symbol z("----/","   / ","  /  "," /   ","/----");
    return 0;
}
