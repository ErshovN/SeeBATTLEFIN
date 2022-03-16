#pragma once
#include "Function.h"

using namespace std;


class Map
{
public:
    void PrintMap() const //����� �� ����� ����� �����
    {
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cout << map[i][j] << "\t";

            }
            cout << endl << endl << endl;
        }
    }
    int GetMap(int x, int y)  //����������� �������� ��������
    {
        return map[x][y];
    }
    void SetMap(int x, int y, bool ori, int size) //��������� �������(�����)
    {
        if (!ori)
        {
            for (int i = 0; i < size; i++) {
                map[x][y + i] = 1;
            }
        }
        else
        {
            for (int i = 0; i < size; i++) {
                map[x + i][y] = 1;
            }
        }
    }
private:
    int map[10][10] = { 0 };
};
