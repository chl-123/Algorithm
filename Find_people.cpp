#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<fstream>
#include<typeinfo>
//using namespace std;

//struct node
//{
//	int x;
//	int y;
//	int f;
//	int s;
//	char dir;
//};

//int main(void)
//{
//	struct node finalpoint, starpoint;
//	starpoint.x = 0; starpoint.y = 0;
//	finalpoint.x = 3; finalpoint.y = 3;
//	//int grid[8][8]
//	char grid[8][8];//����һ��1500*2�ľ������ڴ������
//	ifstream infile;//�����ȡ�ļ���������ڳ�����˵��in
//	infile.open("1.txt");//���ļ�
//	for (int i = 0; i < 8; i++)//������ѭ��
//	{
//		for (int j = 0; j < 8; j++)//������ѭ��
//		{
//			infile >> grid[i][j];//��ȡһ��ֵ���ո��Ʊ�������и�������д�뵽�����У����в���ѭ������
//		}
//	}
//	infile.close();//��ȡ���֮��ر��ļ�
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)//������ѭ��
//		{
//			cout << grid[i][j] << "";//��ȡһ��ֵ���ո��Ʊ�������и�������д�뵽�����У����в���ѭ������
//		}
//		cout << endl;
//	}
//	int move[4][2] = { 0,-1,0,1,-1,0,1,0 };
//	//int  target[4] = { 2,3,4,5 };
//	char  target[4] = { 'U','D','L','R' };
//	int head = 1, tail = 1;
//	struct node nowPoint, here, que[20000];
//	//here.x = 1;
//	//here.y = 1;
//
//	que[tail].x = 1;
//	que[tail].y = 1;
//	que[tail].f = 0;
//	que[tail].s = 0;
//	//cout << finalPoint.x;
//	//queue<node> Q1;
//	tail++;
//
//	//Q1.push(here);
//	int flag = 0;
//	while (head < tail)
//	{
//
//		for (int i = 0; i < 4; i++)
//		{
//			nowPoint.x = que[head].x + move[i][0];
//			nowPoint.y = que[head].y + move[i][1];
//			if (nowPoint.x < 1 || nowPoint.x>7 || nowPoint.y < 1 || nowPoint.y>7)
//			{
//				continue;
//			}
//			if (grid[nowPoint.y][nowPoint.x] == '0')
//			{
//				//cout << 3;
//				grid[nowPoint.y][nowPoint.x] = target[i];
//				que[tail].x = nowPoint.x;
//				que[tail].y = nowPoint.y;
//				que[tail].f = head;
//				que[tail].s = que[head].s + 1;
//				que[tail].dir = target[i];
//				//Q1.push(nowPoint);
//				tail++;
//				//cout << 2;
//
//				if ((nowPoint.y == 7) && (nowPoint.x == 7))
//				{
//					flag = 1;
//					break;
//				}
//				//cout << 5;
//			}
//
//		}
//
//		if (flag == 1)
//		{
//			break;
//			//cout << 0;
//		}
//		//here=Q1.front();
//		head++;
//
//	}
//
//
//
//	//cout << nowPoint.x;
//
//
//
//
//	char t[20000];
//	int temp = tail - 1;
//	for (int i = que[tail - 1].s; i >= 1; i--)
//	{
//		t[i] = que[temp].dir;
//		temp = que[temp].f;
//	}
//	for (int i = 1; i <= que[tail-1].s; i++)
//	{
//		cout << t[i];
//	}
//	cout << endl;
//	for (int i = 0; i < 8; i++)
//	{
//		for (int j = 0; j < 8; j++)//������ѭ��
//		{
//			cout << grid[i][j] << "";//��ȡһ��ֵ���ո��Ʊ�������и�������д�뵽�����У����в���ѭ������
//		}
//		cout << endl;
//		
//	}
//	//cout << nowPoint.x;
//}