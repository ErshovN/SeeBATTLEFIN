#include <iostream> 
#include "Map.h"
#include "ship.h"
#include "locale.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    Map a;
    
    bool g = 1;
    a.FullSetMap();
    while (g)
    {
        cout << "���������: " << endl;
        int x, y;
        cin >> x >> y;
        a.shot(x, y);
        a.PrintMap();
        g = a.game();
    }
    cout << "���� ��������" << endl;
    return 0;
}