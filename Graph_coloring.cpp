// 14_图的着色2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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



