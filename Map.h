#pragma once

class Map
{
public:
    void PrintMap() const; //вывод на экран своей карты
 
    int GetMap(int x, int y)  { return map[x][y]; } // возвращение элемента карты

    void SetMap(int x, int y, bool ori, int size); //изменение массива(карты)
   
private:
    int map[10][10] = { 0 };
};

