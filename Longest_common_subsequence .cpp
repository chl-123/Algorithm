// �����������.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream> 
#include <cstring> 
#include<algorithm>
using namespace std;

//char sz1[1000];
//char sz2[1000];
//int maxLen[1000][1000];
//int main() {
//	while (cin >> sz1 >> sz2) {
//		int length1 = strlen(sz1);
//		int length2 = strlen(sz2);
//		int nTmp;
//		int i, j;
//		for (i = 0; i <= length1; i++)
//			maxLen[i][0] = 0;
//		for (j = 0; j <= length2; j++)
//			maxLen[0][j] = 0;
//		for (i = 1; i <= length1; i++) {
//			for (j = 1; j <= length2; j++) {
//				if (sz1[i - 1] == sz2[j - 1])
//					maxLen[i][j] = maxLen[i - 1][j - 1] + 1;
//				else
//					maxLen[i][j] = max(maxLen[i][j - 1], maxLen[i - 1][j]);
//			}
//		}
//		cout << maxLen[length1][length2] << endl;
//	}
//	return 0;
//}


char s1[100];
char s2[100];
int maxlenth[100][100];
//int main() 
//{
//    while (cin>>s1>>s2)
//    {
//        int length1 = strlen(s1);
//        int length2 = strlen(s2);

//        int i, j;
//        for ( i = 0; i < length1; i++)
//        {
//            maxlenth[i][0] = 0;
//        }
//        for ( j = 0; j < length2; j++)
//        {
//            maxlenth[0][j] = 0;
//        }
//        for ( i = 1; i < length1; i++)
//        {
//            for (j = 1; j < length2; j++)
//            {

//                if (s1[i-1]==s2[j-1])
//                {
//                    maxlenth[i][j] = maxlenth[i - 1][j - 1] + 1;
//                }
//                else
//                {
//                    maxlenth[i][j] = max(maxlenth[i - 1][j], maxlenth[i][j - 1]);
//                }
//            }
//        }
//    }
//   
//}