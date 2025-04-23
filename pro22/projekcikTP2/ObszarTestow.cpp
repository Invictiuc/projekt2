#include "BibliotekaZmiennych.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>

using namespace std;

vector<char> pociag;
vector<char> tor1;
vector<char> tor2;
vector<char> tor3;
vector<char> tor4;
vector<char> tor5;

bool funkcjaWywolana = false;


void PlanszaTEST()
{
    char value = 0;

    for (int i = 0; i < 5; i++)
    {
        value = (rand() % 4) + 65;
        tor1.push_back(value);
    }
    for (int i = 0; i < 5; i++)
    {
        value = (rand() % 4) + 65;
        tor2.push_back(value);
    }
    for (int i = 0; i < 5; i++)
    {
        value = (rand() % 4) + 65;
        tor3.push_back(value);
    }
    for (int i = 0; i < 5; i++)
    {
        value = (rand() % 4) + 65;
        tor4.push_back(value);
    }
    for (int i = 0; i < 5; i++)
    {
        value = (rand() % 4) + 65;
        tor5.push_back(value);
    }

    for (int i = 0; i < 5; i++)
    {
        pociag.push_back(tor1[i]);
        pociag.push_back(tor2[i]);
        pociag.push_back(tor3[i]);
        pociag.push_back(tor4[i]);
        pociag.push_back(tor5[i]);
    }

    std::random_device rd;
    std::mt19937 g(rd());
}

void DrukPlanszyTEST(){
    funkcjaWywolana=true;
}
void InterfejsGierkiTEST() {
    cout << endl << "Witaj w naszej grze!" << endl << endl;
    cout << "Zasady:" << endl;
    cout << "Celem gry jest odpowiednie dopasowanie pociagow A,B,C,D do wygenerowanych pieciu bocznic." << endl;
    cout << "Uzytkownik dokonuje wyboru klikajac klawisze od 2-6. Dobrze dopasowane pociagi daja uzytkownikowi punkty. 50pkt - W" << endl << endl;
    DrukPlanszyTEST();
}
