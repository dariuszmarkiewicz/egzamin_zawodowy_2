/*
Program wyswietla liczbe instancji,
czyli tworzonych obiektow klasy Biblioteka
*/

#include <iostream>

using namespace std;

class Biblioteka
{
private:

    static int instanceCount;

    public:

    Biblioteka()
    {
        instanceCount++;
        cout << instanceCount << endl;
    }

    ~Biblioteka()
    {
        instanceCount--;
        cout << instanceCount << endl;
    }
};

int Biblioteka::instanceCount = 0;

int main()
{
    Biblioteka czyt_1;
    Biblioteka czyt_2;
    Biblioteka czyt_3;
    Biblioteka czyt_4;
    Biblioteka czyt_5;
    Biblioteka czyt_6;

    cout << "Koniec tworzenia obiektow"  << endl;

    return 0;
}
