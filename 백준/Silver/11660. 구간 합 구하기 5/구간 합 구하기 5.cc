// #11660
#include <iostream>
using namespace std;

int N, M;
long long board[1026][1026];
long long boardSum[1026][1026];
/*
    1) board 배열에서 행 안에서의 누적합을 구하는 배열 boardSum을 선언
    2) 행 입력을 받을 때 마다 누적합을 계산, 누적합 보드에 계산
    3) 누적합 보드로부터 입력받은 좌표값의 차이를 행따라 계산 후 출력

    * 시간 x,y좌표에 따라 그 때 계산을 할 경우 최대 10만 * 10만 -> 시간 초과
    * 공간 : 보드사이즈 는 1026*1026*2 2백만
*/
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            cin >> board[i][j];
            boardSum[i][j] = board[i][j] + boardSum[i][j-1];
        }
    }

    for (int i = 0; i < M; ++i)
    {
        long long ans = 0;
        
        int X1, Y1, X2, Y2;
        cin >> Y1 >> X1 >> Y2 >> X2;

        for (int j = Y1; j <= Y2; ++j)
        {
            ans = ans + boardSum[j][X2] - boardSum[j][X1-1];
        }
        cout << ans << '\n';
    }

    return 0;
}