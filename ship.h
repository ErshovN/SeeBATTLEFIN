#pragma once
class Ship
{
public:
    Ship(int ks, int kx, int ky, bool ko) : size(ks), x(kx), y(ky), orientation(ko){}

    void SetX(int x)  { this->x = x; }  //������� �������� �������

    void SetY(int y) { this->y = y; }   //������� �������� �������

    void SetSize(int size) { this->size = size; }  //������� ����� �������

    void SetOrientation(bool orientation)  { this->orientation = orientation; } //������� ���������� ������� orientation ��� 0(�������������) ��� 1(�����������) 

    int GetX()  { return x; } //����������� ���������� x

    int GetY() { return y; } //����������� ���������� y

    bool GetOrientation() { return orientation; } //����������� ����������

    int GetSize() { return size; }//����������� �������

private:
    int x;
    int y;
    int size = 0;
    bool orientation = 0;
};

