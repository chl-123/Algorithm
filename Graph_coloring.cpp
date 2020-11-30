// 14_ͼ����ɫ2.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include<vector>
#include<iostream>
#include"Graph_coloring.h"
using namespace std;

vector<vector<int>> dfs(vector<vector<int>>& image, int sr, int sc, int newColor)
{
    cout << 3;
    if (image[sr][sc] == newColor) return image;
    int target = image[sr][sc];
    image[sr][sc] = newColor;
    cout << 4;
    if (sr - 1 >= 0 && image[sr - 1][sc] == target)
    {
        dfs(image, sr - 1, sc, newColor);
        cout << 5;

    }

    if (sc - 1 >= 0 && image[sr][sc - 1] == target)dfs(image, sr, sc - 1, newColor);
    if (sr + 1 < image.size() && image[sr + 1][sc] == target) dfs(image, sr + 1, sc, newColor);
    if (sc + 1 < image[0].size() && image[sr][sc + 1] == target) dfs(image, sr, sc + 1, newColor);
    return image;
}
void Graph_coloring()
{
    vector<vector<int>> image(50);
        int n, m, s;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> s;
                image[i].push_back(s);
            }
        }
        int sr, sc, newcolor;
        cin >> sr >> sc >> newcolor;
        dfs(image, sr, sc, newcolor);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << image[i][j];
            }
            cout << endl;
        }
}


// ���г���: Ctrl + F5 ����� >����ʼִ��(������)���˵�
// ���Գ���: F5 ����� >����ʼ���ԡ��˵�

// ����ʹ�ü���: 
//   1. ʹ�ý��������Դ�������������/�����ļ�
//   2. ʹ���Ŷ���Դ�������������ӵ�Դ�������
//   3. ʹ��������ڲ鿴���������������Ϣ
//   4. ʹ�ô����б��ڲ鿴����
//   5. ת������Ŀ��>���������Դ����µĴ����ļ�����ת������Ŀ��>�����������Խ����д����ļ���ӵ���Ŀ
//   6. ��������Ҫ�ٴδ򿪴���Ŀ����ת�����ļ���>���򿪡�>����Ŀ����ѡ�� .sln �ļ�
