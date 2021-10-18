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
1)Делаем букву в блокноте или гдето ещё
Пример:
Буква А
/---\
|   |
|---|
|   |
|   |
Обязательно требуется , чтобы все строчки были одной длинны , даже если придётся просто поставить пробелы
2)Удваиваем \ еслм они есть
/---\\
|   |
|---|
|   |
|   |
3)Создаём символ , называем нужной буквой , в скобочки пишем каждую строку через запятую в кавычках
symbol a("/---\\","|   |","|---|","|   |","|   |");

4)Проверяем вывод
mainscreen.add(a);
mainscreen.add(a);
mainscreen.print();
Если вывелось
/---\/---\
|   ||   |
|---||---|
|   ||   |
|   ||   |
, то отлично.
Удаляем всё , что написали в 4 пункте и камитим в смартгите с соответствующим названием
5)Пулим на гитхаб
**/
symbol a("/---\\","|   |","|---|","|   |","|   |");
    return 0;
}
