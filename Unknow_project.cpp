// _�㷨��ϰ2.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

//#include <iostream>
//#include <algorithm>
//#include <math.h>
////using namespace std;
//
//#define N 200000
//
//struct Node {
//	int value, pos;
//
//	bool operator<(const Node& tmp) const
//	{
//		return value < tmp.value;
//	};
//}node[N];
//
//int row[N], col[N];


//class Unknown {
//	// insert code here...
//public:
//	void unknown(int argc, const char* argv[]) {
//		long n, m, sum;
//		cin >> n >> m;
//		sum = n * n;
//		long rowNum, colNum;
//		rowNum = colNum = 0;
//		while (m--) {
//			int x, y;
//			cin >> x >> y;
//			if (!row[x]) {
//				sum -= n - colNum;
//			}
//			if (!col[y]) {
//				sum -= n - rowNum;
//			}
//			if (!row[x] && !col[y]) {
//				++sum;
//			}
//			if (!row[x]) {
//				++rowNum;
//				row[x] = 1;
//			}
//			if (!col[y]) {
//				++colNum;
//				col[y] = 1;
//			}
//
//			cout << sum << " ";
//		};
//	}
//
//
//
//	//return 0;
//};

// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ������ʾ: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�
