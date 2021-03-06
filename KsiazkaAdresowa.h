#ifndef KSIAZKADRESOWA
#define KSIAZKAADRESOWA

#include <iostream>
#include  "UzytkownikManager.h"
#include "AdresatManager.h"
#include "MetodyPomocnicze.h"

using namespace std;

class KsiazkaAdresowa
{
    UzytkownikManager uzytkownikManager;
    AdresatManager *adresatManager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:

    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
    : uzytkownikManager(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami)
    {
    adresatManager = NULL;
    };

    ~KsiazkaAdresowa()
    {
        delete adresatManager;
        adresatManager = NULL;
    }

    char wybierzOpcjeZMenuUzytkownika();
    char wybierzOpcjeZMenuGlownego();

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    int pobierzidZalogowanegoUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika ();
    void wylogowanieUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void edytujAdresata();
    int usunAdresata();

};
#endif // KSIAZKAADRESOWA
