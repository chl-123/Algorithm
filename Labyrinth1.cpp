// �Թ�����.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<fstream>
#include<typeinfo>
using namespace std;
//vector<vector<char>> a(51);
int T_min = 10000;
char book[51][51], a[51][51];
char  target[4] = { 'U','L','R','D' };
void dfs(int x, int y, int step)
{
    int move[4][2] = { 0,1,1,0,0,-1,-1,0 };
    int tx, ty, k;
    if (x == 10 && y == 10)
    {

        if (step < T_min)
        {
            T_min = step;
            for (int i = 0; i < 12; i++)
            {
                for (int j = 0; j < 12; j++)//������ѭ��
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
        if (tx < 0 || tx>11 || ty < 0 || ty>11)
        {
            continue;
        }
        //cout << 2;
        if (a[tx][ty] == 'S' && book[tx][ty] == NULL)
        {
            //cout << 1;
            //char temp = book[tx][ty];
            book[tx][ty] = target[k];
            dfs(tx, ty, step + 1);
            book[tx][ty] = NULL;
        }

    }


    return;
}
//int main()
//{
//
//
//  
//    char s;
//
//  
//    ifstream infile;//�����ȡ�ļ���������ڳ�����˵��in
//	infile.open("1.txt");//���ļ�
//	for (int i = 0; i < 12; i++)//������ѭ��
//	{
//		for (int j = 0; j < 12; j++)//������ѭ��
//		{
//			infile >> a[i][j];
//           // a[i].push_back(s);//��ȡһ��ֵ���ո��Ʊ�������и�������д�뵽�����У����в���ѭ������
//		}
//	}
//	infile.close();//��ȡ���֮��ر��ļ�
//	for (int i = 0; i < 12; i++)
//	{
//		for (int j = 0; j < 12; j++)//������ѭ��
//		{
//			cout << a[i][j] << "";//��ȡһ��ֵ���ո��Ʊ�������и�������д�뵽�����У����в���ѭ������
//		}
//		cout << endl;
//	}
//   // cin >> n >> m >> p >> q;
//    book[1][1] = '1';
//    dfs(1, 1, 0);
//
//    cout << T_min;
//    
//}

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�
