#pragma once

class Map
{
public:
    void PrintMap() const; //����� �� ����� ����� �����
 
    int GetMap(int x, int y)  { return map[x][y]; } // ����������� �������� �����

    void SetMap(int x, int y, bool ori, int size); //��������� �������(�����)
   
    void shot(int x, int y); //�������

    bool game();

    void FullSetMap(); //���� ��������

    bool check(int x, int y, bool ori, int size);

private:
    int map[10][10] = { 0 };
};