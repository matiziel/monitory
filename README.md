# monitory
Laboratorium z przedmiotu Systemy Operacyjne, zadanie 4 - monitory

Rozszerzenie polecenia numer 3.
Stworzenie bufora cyklicznego jako zasobu współdzielonego. Wzajemne wykluczanie realizowane na monitorach. Zadanie wykonywane na wątkach. Warunki odczytu i zapisu z bufora:
- producent nie może przeszkadzać innym producentom, to znaczy jeżeli jeden z nich wykonuje 5 zapisów, drugi z nich może zapisać tylko wtedy gdy pierwszy skończy
- analogicznie dla konsumentów
- należy uniemożliwić czytanie z pustego bufora oraz pisania na pełnym
- producenci i konsumenci mogą działać naprzemiennie

Komplilacja: make
Test: ./lab4
Testowane na Ubuntu 18.04 LTS
