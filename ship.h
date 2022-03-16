#pragma once
class Ship
{
public:
    Ship(int ks, int kx, int ky, bool ko) : size(ks), x(kx), y(ky), orientation(ko){}

    void SetX(int x)  { this->x = x; }  //задание кординат корабля

    void SetY(int y) { this->y = y; }   //задание кординат корабля

    void SetSize(int size) { this->size = size; }  //задание длины корабля

    void SetOrientation(bool orientation)  { this->orientation = orientation; } //задание ориентации коробля orientation или 0(горизонтально) или 1(вертикально) 

    int GetX()  { return x; } //возвращение координаты x

    int GetY() { return y; } //возвращение координаты y

    bool GetOrientation() { return orientation; } //возвращение ориентации

    int GetSize() { return size; }//возвращение размера

private:
    int x;
    int y;
    int size = 0;
    bool orientation = 0;
};

