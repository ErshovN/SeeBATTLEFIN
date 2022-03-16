#include <iostream> 
#include "Map.h"
#include "ship.h"

using namespace std;

int main() {
    Map a;

    
    int xb, yb, sb;
    bool ob;
    cin >> sb >> xb >> yb >> ob; 
    Ship b1(sb, xb, yb, ob);
    a.SetMap(b1.GetX(), b1.GetY(), b1.GetOrientation(), b1.GetSize());

    cin >> sb >> xb >> yb >> ob; 
    Ship b2(sb, xb, yb, ob);
    a.SetMap(b2.GetX(), b2.GetY(), b2.GetOrientation(), b2.GetSize());

    a.PrintMap();
    return 0;
}