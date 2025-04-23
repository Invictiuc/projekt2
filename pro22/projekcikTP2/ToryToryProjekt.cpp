#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <random>
#include <thread>

using namespace std;

int wybor;
int pkt = 0;

char wagon;
char jazdajazda;

bool blad1 = 0;
bool blad2 = 0;
bool blad3 = 0;
bool blad4 = 0;
bool blad5 = 0;

bool wynik1 = 0;
bool wynik2 = 0;
bool wynik3 = 0;
bool wynik4 = 0;
bool wynik5 = 0;

vector <char> pociag;
vector <char> tor1;
vector <char> tor2;
vector <char> tor3;
vector <char> tor4;
vector <char> tor5;

vector<char> tor1Ust;
vector<char> tor2Ust;
vector<char> tor3Ust;
vector<char> tor4Ust;
vector<char> tor5Ust;

vector <char> tor10;
vector <char> tor20;
vector <char> tor30;
vector <char> tor40;
vector <char> tor50;

void Plansza()
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

    random_device rd;
    mt19937 g(rd());
}

void EfektUkonczeniaToru(int numerToru) {
    for (int i = 0; i < 3; ++i) {
        cout << endl << ">>> TOR " << numerToru << " UKOŃCZONY! <<<" << endl;
        this_thread::sleep_for(chrono::milliseconds(700));
    }
}

void DrukPlanszy() {

    int gleb = 0;
    if (pociag.size() >= 9)
    {
        for (int i = 0; i < 8; ++i) {
            cout << pociag[7 - i];
        }
    }
    else {
        for (int i = 0; i < pociag.size(); ++i) {
            cout << pociag[pociag.size() - i - 1];

        }
        for (int i = 0; i < 8 - pociag.size(); ++i) { cout << " "; }
    }
    cout << "  ";

    for (int i = 0; i < gleb; i++) { cout << " "; }
    for (int i = 0; i < 20 - gleb - tor10.size() - tor1Ust.size(); i++) { cout << "="; }
    for (int i = 0; i < tor1Ust.size(); i++) {
        cout << tor1Ust[i];
    }
    cout << "  Tor 1: [";
    for (int i = 0; i < tor1.size(); i++) { cout << tor1[i]; }
    cout << "]" << endl;
    cout << endl;
    gleb = 10;
    for (int i = 0; i < gleb; i++) { cout << " "; }
    cout << "\\" << "\\" << endl << endl;
    gleb++;
    for (int i = 0; i < gleb; i++) { cout << " "; }
    cout << "\\" << "\\";

    for (int i = 0; i < 28 - gleb - tor20.size() - tor2Ust.size(); i++) { cout << "="; }
    for (int i = 0; i < tor2Ust.size(); i++) {
        cout << tor2Ust[i];
    }
    cout << "  Tor 2: [";
    for (int i = 0; i < tor2.size(); i++) { cout << tor2[i]; }
    cout << "]" << endl;

    cout << endl;
    gleb++;
    for (int i = 0; i < gleb; i++) { cout << " "; }
    cout << "\\" << "\\" << endl << endl;
    gleb++;
    for (int i = 0; i < gleb; i++) { cout << " "; }
    cout << "\\" << "\\";

    for (int i = 0; i < 28 - gleb - tor30.size() - tor3Ust.size(); i++) { cout << "="; }
    for (int i = 0; i < tor3Ust.size(); i++) {
        cout << tor3Ust[i];
    }
    cout << "  Tor 3: [";
    for (int i = 0; i < tor3.size(); i++) { cout << tor3[i]; }
    cout << "]" << endl;

    cout << endl;
    gleb++;
    for (int i = 0; i < gleb; i++) { cout << " "; }
    cout << "\\" << "\\" << endl << endl;
    gleb++;
    for (int i = 0; i < gleb; i++) { cout << " "; }
    cout << "\\" << "\\";

    for (int i = 0; i < 28 - gleb - tor40.size() - tor4Ust.size(); i++) { cout << "="; }
    for (int i = 0; i < tor4Ust.size(); i++) {
        cout << tor4Ust[i];
    }
    cout << "  Tor 4: [";
    for (int i = 0; i < tor4.size(); i++) { cout << tor4[i]; }
    cout << "]" << endl;

    cout << endl;
    gleb++;
    for (int i = 0; i < gleb; i++) { cout << " "; }
    cout << "\\" << "\\" << endl << endl;
    gleb++;
    for (int i = 0; i < gleb; i++) { cout << " "; }
    cout << "\\" << "\\";

    for (int i = 0; i < 28 - gleb - tor50.size() - tor5Ust.size(); i++) { cout << "="; }
    for (int i = 0; i < tor5Ust.size(); i++) {
        cout << tor5Ust[i];
    }
    cout << "  Tor 5: [";
    for (int i = 0; i < tor5.size(); i++) { cout << tor5[i]; }
    cout << "]" << endl << endl;
    cout << endl << "Wpisz 1 jesli chcesz zakonczyc rozgrywke" << endl;
}

void InterfejsGierki() {
    cout << endl << "Witaj w naszej grze!" << endl << endl;
    cout << "Zasady:" << endl;
    cout << "Celem gry jest odpowiednie dopasowanie pociagow A,B,C,D do wygenerowanych pieciu bocznic." << endl;
    cout << "Uzytkownik dokonuje wyboru klikajac klawisze od 2-6. Dobrze dopasowane pociagi daja uzytkownikowi punkty. 50pkt - W" << endl << endl;
    DrukPlanszy();
}

void sprawdzanie(const vector<char>& tor, const vector<char>& szablon, bool& blad, bool& wynik, int numerToru) {
    for (int i = 0; i < tor.size() - 1; i++) {
        if (tor[i] != szablon[i]) {
            blad = 1;
            cout << "bledny wybor, ten tor juz zostal zle zapelniony: -10pkt" << endl;
            pkt -= 10;
            return;
        }
    }
    if (tor.size() == 5) {
        cout << "tor zostal poprawnie uzupelniony: +10pkt!" << endl;
        wynik = 1;
        pkt += 10;

        // Uruchomienie efektu w osobnym wątku
        thread efekt(EfektUkonczeniaToru, numerToru);
        efekt.detach();

        return;
    }
}

void RuchGracza() {
    while (wybor != 1) {
        cout << endl << "Gdzie kierujemy nastepny wagon?" << endl;
        cin >> wybor;
        if (wybor == 1) {
            cout << "Troche slabo ze tak szybko sie poddales" << endl;
            cout << "Liczba uzyskanych punktow: " << pkt << endl;
        }
        while (wybor != 2 && wybor != 3 && wybor != 4 && wybor != 5 && wybor != 6 && wybor != 1) {
            cout << "Niepoprawny ruch. Sprobuj jeszcze raz" << endl;
            cin >> wybor;
        }
        if (wybor == 2 && tor1Ust.size() == 5) { cout << "ten tor jest juz pelen, wybierz inny"; continue; }
        if (wybor == 3 && tor2Ust.size() == 5) { cout << "ten tor jest juz pelen, wybierz inny"; continue; }
        if (wybor == 4 && tor3Ust.size() == 5) { cout << "ten tor jest juz pelen, wybierz inny"; continue; }
        if (wybor == 5 && tor4Ust.size() == 5) { cout << "ten tor jest juz pelen, wybierz inny"; continue; }
        if (wybor == 6 && tor5Ust.size() == 5) { cout << "ten tor jest juz pelen, wybierz inny"; continue; }
        wagon = move(pociag.front());
        pociag.erase(pociag.begin());

        if (wybor == 2) {
            cout << "Wpisz W aby jechac, R aby wybrac inny tor" << endl;
            cin >> jazdajazda;
            while (jazdajazda != 'W' && jazdajazda != 'R') {
                cout << "Niepoprawny znak. Sprobuj jeszcze raz" << endl;
                cin >> jazdajazda;
            }
            if (jazdajazda == 'W') {
                tor1Ust.push_back(move(wagon));
                DrukPlanszy();
                if (blad1 == 1) { cout << "na torze był już błąd, nic sie nie dzieje" << endl;; }
                else { sprawdzanie(tor1Ust, tor1, blad1, wynik1, 1); }
            }
            if (jazdajazda == 'R') {
                RuchGracza;
            }
        }
        if (wybor == 3) {
            cout << "Wpisz W aby jechac, R aby wybrac inny tor" << endl;
            cin >> jazdajazda;
            while (jazdajazda != 'W' && jazdajazda != 'R') {
                cout << "Niepoprawny znak. Sprobuj jeszcze raz" << endl;
                cin >> jazdajazda;
            }
            if (jazdajazda == 'W') {
                tor2Ust.push_back(move(wagon));
                DrukPlanszy();
                if (blad2 == 1) { cout << "na torze był już błąd, nic sie nie dzieje" << endl;; }
                else { sprawdzanie(tor2Ust, tor2, blad2, wynik2, 2); }
            }
            if (jazdajazda == 'R') {
                RuchGracza;
            }
        }
        if (wybor == 4) {
            cout << "Wpisz W aby jechac, R aby wybrac inny tor" << endl;
            cin >> jazdajazda;
            while (jazdajazda != 'W' && jazdajazda != 'R') {
                cout << "Niepoprawny znak. Sprobuj jeszcze raz" << endl;
                cin >> jazdajazda;
            }
            if (jazdajazda == 'W') {
                tor3Ust.push_back(move(wagon));
                DrukPlanszy();
                if (blad3 == 1) { cout << "na torze był już błąd, nic sie nie dzieje" << endl;; }
                else { sprawdzanie(tor3Ust, tor3, blad3, wynik3, 3); }
            }
            if (jazdajazda == 'R') {
                RuchGracza;
            }
        }
        if (wybor == 5) {
            cout << "Wpisz W aby jechac, R aby wybrac inny tor" << endl;
            cin >> jazdajazda;
            while (jazdajazda != 'W' && jazdajazda != 'R') {
                cout << "Niepoprawny znak. Sprobuj jeszcze raz" << endl;
                cin >> jazdajazda;
            }
            if (jazdajazda == 'W') {
                tor4Ust.push_back(move(wagon));
                DrukPlanszy();
                if (blad4 == 1) { cout << "na torze był już błąd, nic sie nie dzieje" << endl;; }
                else { sprawdzanie(tor4Ust, tor4, blad4, wynik4, 4); }
            }
            if (jazdajazda == 'R') {
                RuchGracza;
            }
        }
        if (wybor == 6) {
            cout << "Wpisz W aby jechac, R aby wybrac inny tor" << endl;
            cin >> jazdajazda;
            while (jazdajazda != 'W' && jazdajazda != 'R') {
                cout << "Niepoprawny znak. Sprobuj jeszcze raz" << endl;
                cin >> jazdajazda;
            }
            if (jazdajazda == 'W') {
                tor5Ust.push_back(move(wagon));
                DrukPlanszy();
                if (blad5 == 1) { cout << "na torze był już błąd, nic sie nie dzieje" << endl;; }
                else { sprawdzanie(tor5Ust, tor5, blad5, wynik5, 5); }
            }
            if (jazdajazda == 'R') {
                RuchGracza;
            }
        }
        if (wynik1 == 1 && wynik2 == 1 && wynik3 == 1 && wynik4 == 1 && wynik5 == 1)
        {
            cout << "wygrales gre: +50pkt!" << endl;
            pkt = pkt + 50;
            cout << "liczba uzyskanych pkt:" << pkt << endl;
            return;
        }
    }
}

int main() {
    srand(time(NULL));
    thread t(Plansza);
    InterfejsGierki();
    t.join();
    RuchGracza();
    return 0;
}



