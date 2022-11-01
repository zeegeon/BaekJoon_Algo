#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
#include <math.h>
using namespace std;

int n;
int m;
int inven;
bool flag = false;

int ground[501][501];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m >> inven;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> ground[i][j];
        }
    }

    int temp = 0;

    int mintime = 80000000;
    int maxheight;
    int time = 0;
    int tobedeleted;
    int tobeadded;

    //// 각 높이마다로 맞추는데에 걸리는 시간 모두 계산 (0부터 256까지)
    //// 가장 적은 시간, 가장 높은 높이 저장

    for (int x = 0; x <= 256; x++) 
    {
        tobedeleted = 0;
        tobeadded = 0;

        for (int i = 0; i < n; i++) 
        {

            for (int j = 0; j < m; j++) 
            {
                temp = ground[i][j] - x; //지금 고려하고 있는 칸이 층보다 더 높다면 지운다. 낮으면 쌓는다.

                if (temp > 0) 
                {
                    tobedeleted += temp;  // x층으로 평탄화 하기 위해 지워야 할 개수
                }
                else if (temp < 0) 
                {
                    tobeadded -= temp; // x층으로 가기위해 쌓아야 할 것

                }
            }
        }

        if (tobedeleted + inven >= tobeadded) 
        { //지워서 inven에 들어올 개수 + inven안에 이미 있던 개수가 쌓아서 없어질 것보다 크다면
            //즉 x층으로의 build 자체가 가능하다면
            
            time = tobedeleted * 2 + tobeadded;
            
            if (time <= mintime) 
            { //if 문이 바깥으로 빠져있으면 time = 0  및 초기화가 그대로 고려됨.
                mintime = time;
                maxheight = x;
                flag = true;
            }
        }
    }

    if (!flag)
    {
        mintime = 0;
        maxheight = 0;
    }

    cout << mintime << " " << maxheight << "\n";

    return 0;
}