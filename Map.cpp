#include "Map.h"
#include <iostream>

using namespace std;

void Map::PrintMap() const //����� �� ����� ����� �����
{
    for (int i = 0; i < 10; i++) 
    {
        for (int j = 0; j < 10; j++) 
        {
            if (map[j][i]) 
            {
                cout << map[j][i] << "\t";
            }
            else
            {
                cout << "-" << "\t";
            }
        }
        cout << endl << endl << endl;
    }
}

void Map::SetMap(int x, int y, bool ori, int size) //��������� �������(�����)
{
    if (ori)
    {
        for (int i = 0; i < size; i++) 
        {
            map[x - 1][y + i - 1] = 1;
        }
    }
    else
    {
        for (int i = 0; i < size; i++) 
        {
            map[x + i - 1][y - 1] = 1;
        }
    }
}

void Map::shot(int x, int y)
{
    if (map[x - 1][y - 1] == 1) 
    {
        cout << "�����" << endl;
        map[x - 1][y - 1] = 0;
    }
    else 
    {
        cout << "������" << endl;
    }
}

bool Map::game()
{
    bool g = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (map[i][j] == 1) {
                g = 1;
            }
        }
    }
    return g;
}

void Map::FullSetMap()
{
    for (int i = 0; i < 10; i++) // ���� ��������
    {
        int x, y, s;
        bool o;

        if (i == 0) {
            bool c = 1;
            while (c)
            {
                s = 4;
                cout << "������ ���������� � ���������� 4 �������" << endl;
                cout << "x: ";
                cin >> x;
                cout << "y: ";
                cin >> y;
                cout << "��.: ";
                cin >> o;
                if (check(x, y, o, s)) {
                    SetMap(x, y, o, s);
                    c = 0;
                }
                else {
                    cout << "���������� ��������� �������" << endl << "����������������� �����";
                }
            }
        }
        if (i > 0 and i < 3) {
            bool c = 1;
            while (c)
            {
                s = 3;
                cout << "������ ���������� � ���������� 3 �������" << endl;
                cout << "x: ";
                cin >> x;
                cout << "y: ";
                cin >> y;
                cout << "��.: ";
                cin >> o;
                if (check(x, y, o, s)) {
                    SetMap(x, y, o, s);
                    c = 0;
                }
                else {
                    cout << "���������� ��������� �������" << endl << "����������������� �����";
                }
            }
        }
        if (i > 2 and i < 6) {
            bool c = 1;
            while (c)
            {
                s = 2;
                cout << "������ ���������� � ���������� 2 �������" << endl;
                cout << "x: ";
                cin >> x;
                cout << "y: ";
                cin >> y;
                cout << "��.: ";
                cin >> o;
                if (check(x, y, o, s)) {
                    SetMap(x, y, o, s);
                    c = 0;
                }
                else {
                    cout << "���������� ��������� �������" << endl << "����������������� �����";
                }
            }
        }
        if (i > 5) {
            bool c = 1;
            while (c)
            {
                s = 1;
                cout << "������ ���������� � ���������� 1 �������" << endl;
                cout << "x: ";
                cin >> x;
                cout << "y: ";
                cin >> y;
                cout << "��.: ";
                cin >> o;
                if (check(x, y, o, s)) {
                    SetMap(x, y, o, s);
                    c = 0;
                }
                else {
                    cout << "���������� ��������� �������" << endl << "����������������� �����";
                }
            }
        }
    }
}

bool Map::check(int x, int y, bool ori, int size)
{
    bool c = 1;
    if (ori)
    {
        for (int i = 0; i <= size + 1; i++)
        {
            if (map[x - 1][y + i - 2] == 1 or map[x][y + i - 2] == 1 or map[x - 2][y + i - 2] == 1) {
                c = 0;
            }
        }
    }
    else
    {
        for (int i = 0; i <= size + 1; i++)
        {
            if (map[x + i - 2][y - 1] == 1 or map[x + i - 2][y] == 1 or map[x + i - 2][y - 2] == 1 ) {
                c = 0;
            }
        }
    }
    return c;
}