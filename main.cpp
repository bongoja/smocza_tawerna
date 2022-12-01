#include <iostream>
using namespace std;
string imie, adres, nazwa_restauracji;
int opcja, table_num, open_hours, rok, miesiac, dzien, open, close;
// godziny otwarcia
int main()
{
    open = 10;
    close = 15;
    nazwa_restauracji = "Smocza Tawerna";
    int i;
    for (i = open; i <= close; i++)
    {
        cout << "dziala!";
    }
    cout << endl;
    cout << "Nazwa restauracji: " << nazwa_restauracji << endl;
    cout << "Adres: ul. Taczaka, Poznań" << endl;
    cout << "Właściciel: Jan III Sobieski" << endl;
    cout << "Podaj Imię" << endl;
    cin >> imie;

    cout << endl
         << "Na miejscu czy na wynos?" << endl;
    cout << "1. Na miejscu" << endl;
    cout << "2. Na wynos" << endl;
    cout << "Wybierz opcje 1 lub 2" << endl;
    cin >> opcja;

    switch (opcja)
    {
    case 1:
    {
        cout << "Zamawiam na miejscu" << endl;
        cout << "Podaj numer stolika" << endl;
        cin >> table_num;
        break;
    }
    case 2:
    {
        cout << "Zamawiam na dowoz" << endl;
        cout << "Podaj adres" << endl;
        cin >> adres;
        cout << "Podaj datę, rok" << endl;
        cin >> rok;
        cout << "Podaj miesiąc" << endl;
        cin >> miesiac;
        cout << "Podaj dzień" << endl;
        cin >> dzien;

        break;
    }
    default:
    {
        cout << "Miało być 1 albo 2, nie coś innego" << endl;
        break;
    }
    }

    return 0;
}
