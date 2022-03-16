#include "Map.h"
#include <iostream>

using namespace std;

void Map::PrintMap() const //вывод на экран своей карты
{
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << map[i][j] << "\t";

        }
        cout << endl << endl << endl;
    }
}

void Map::SetMap(int x, int y, bool ori, int size) //изменение массива(карты)
{
    if (!ori)
    {
        for (int i = 0; i < size; i++) {
            map[x - 1][y + i - 1] = 1;
        }
    }
    else
    {
        for (int i = 0; i < size; i++) {
            map[x + i - 1][y - 1] = 1;
        }
    }
}