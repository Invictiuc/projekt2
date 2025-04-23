#include <cassert>
#include <iostream>
#include "BibliotekaZmiennych.h"

void test_pociag_zakres_AD() {
    PlanszaTEST();
    for (char c : pociag) {
        assert(c >= 'A' && c <= 'D');
    }
    std::cout << "Test zdany, wszystkie wagoniki są z przedziału A–D." << std::endl;
}

void test_wywolanie_funkcji(){
    funkcjaWywolana = false; // Ustawiamy flagę na false
    InterfejsGierkiTEST();       // Funkcja powinna ją zmienić
    assert(funkcjaWywolana && "Funkcja nie została wywołana!");
    std::cout << "Test zdany, funkcja została wywołana na końcu InterfejsGierki()." << std::endl;
}

int main() {
    test_pociag_zakres_AD();
    test_wywolanie_funkcji();
    return 0;
}
