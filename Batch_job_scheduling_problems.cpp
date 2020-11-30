// ��������ҵ��������.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>
using namespace std;
#define MAX 200
int* x1;//��ҵJi�ڻ���1�ϵĹ���ʱ��
int* x2;//��ҵJi�ڻ���2�ϵĹ���ʱ��
int number = 0;//��ҵ����Ŀ
int* xorder;//��ҵ˳��
int* bestorder;//���ŵ���ҵ˳��
int bestvalue = MAX;//���ŵ�ʱ��
int xvalue = 0;//��ǰ����õ�ʱ��
int f1 = 0;//����1��ɵ�ʱ��
int* f2;//����2��ɵ�ʱ��
void backtrack(int k)
{
    if (k > number)
    {
        for (int i = 1; i <= number; i++) bestorder[i] = xorder[i];
        bestvalue = xvalue;
    }
    else
    {
        for (int i = k; i <= number; i++)
        {
            f1 += x1[xorder[i]];
            f2[k] = (f2[k - 1] > f1 ? f2[k - 1] : f1) + x2[xorder[i]];
            xvalue += f2[k];
            swap(xorder[i], xorder[k]);
            if (xvalue < bestvalue) backtrack(k + 1);
            swap(xorder[i], xorder[k]);
            xvalue -= f2[k];
            f1 -= x1[xorder[i]];
        }
    }

}

//int main()
//{
//    cout << "��������ҵ��Ŀ��";
//    cin >> number;
//    x1 = new int[number + 1];
//    x2 = new int[number + 1];
//    xorder = new int[number + 1];
//    bestorder = new int[number + 1];
//    f2 = new int[number + 1];
//    x1[0] = 0;
//    x2[0] = 0;
//    xorder[0] = 0;
//    bestorder[0] = 0;
//    f2[0] = 0;
//    cout << "������ÿ����ҵ�ڻ���1�����õ�ʱ�䣺" << endl;
//    int i;
//    for (i = 1; i <= number; i++)
//    {
//        cout << "��" << i << "����ҵ=";
//        cin >> x1[i];
//    }
//    cout << "������ÿ����ҵ�ڻ���2�����õ�ʱ�䣺" << endl;
//    for (i = 1; i <= number; i++)
//    {
//        cout << "��" << i << "����ҵ=";
//        cin >> x2[i];
//    }
//    for (i = 1; i <= number; i++) xorder[i] = i;
//    backtrack(1);
//    cout << "���ʡ��ʱ��Ϊ��" << bestvalue << endl;
//    cout << "��Ӧ�ķ���Ϊ��";
//    for (i = 1; i <= number; i++) cout << bestorder[i] << "  ";
//    cout << endl;
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
