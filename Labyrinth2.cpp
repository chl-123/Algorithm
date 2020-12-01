// �Թ�����2.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<fstream>
#include<typeinfo>
using namespace std;

int T_min = 10000;
int book[51][51], a[51][51], target[51][51];

void dfs(int x, int y, int step)
{
    int move[4][2] = { 0,1,1,0,0,-1,-1,0 };
    int tx, ty, k;
    if (x == 7 && y == 7)
    {

        if (step < T_min)
        {
            T_min = step;
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)//������ѭ��
                {
                    cout << book[i][j] << "";//��ȡһ��ֵ���ո��Ʊ�������и�������д�뵽�����У����в���ѭ������
                }
                cout << endl;
            }
        }
        return;
    }
    for (k = 0; k < 4; k++)
    {

        tx = x + move[k][0];
        ty = y + move[k][1];
        if (tx < 0 || tx>7 || ty < 0 || ty>7)
        {
            continue;
        }
        if (a[tx][ty] == 0 && book[tx][ty] == 0)
        {
            //char temp = book[tx][ty];
            book[tx][ty] = 1;
            dfs(tx, ty, step + 1);
            book[tx][ty] = 0;
        }

    }


    return;
}
void Labyrinth2()
{


    
    int s;

    ifstream infile;//�����ȡ�ļ���������ڳ�����˵��in
    infile.open("1.txt");//���ļ�
    for (int i = 0; i < 8; i++)//������ѭ��
    {
        for (int j = 0; j < 8; j++)//������ѭ��
        {
            infile >> a[i][j];
            //��ȡһ��ֵ���ո��Ʊ�������и�������д�뵽�����У����в���ѭ������
        }
    }
    infile.close();//��ȡ���֮��ر��ļ�
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)//������ѭ��
        {
            cout << a[i][j] << "";//��ȡһ��ֵ���ո��Ʊ�������и�������д�뵽�����У����в���ѭ������
        }
        cout << endl;
    }
    // cin >> n >> m >> p >> q;
    book[1][1] = 1;
    dfs(1, 1, 0);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)//������ѭ��
        {
            cout << book[i][j] << "";//��ȡһ��ֵ���ո��Ʊ�������и�������д�뵽�����У����в���ѭ������
        }
        cout << endl;
    }
    cout << T_min;

}

