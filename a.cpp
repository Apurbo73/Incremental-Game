#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, K;
        cin >> X >> Y >> K;
        bool aliceWins = false;
        for (int firstMove = 1; firstMove <= K; firstMove++)
        {
            if (firstMove > X && firstMove > Y)
                break;
            if (firstMove <= X)
            {
                int x = X - firstMove;
                int y = Y;
                int prev = firstMove;
                bool canBobMove = false;
                for (int bobMove = prev + 1; bobMove <= 20; bobMove++)
                {
                    if (bobMove <= x || bobMove <= y)
                    {
                        canBobMove = true;
                        break;
                    }
                }
                if (!canBobMove)
                {
                    aliceWins = true;
                    break;
                }
            }
            if (firstMove <= Y)
            {
                int x = X;
                int y = Y - firstMove;
                int prev = firstMove;
                bool canBobMove = false;
                for (int bobMove = prev + 1; bobMove <= 20; bobMove++)
                {
                    if (bobMove <= x || bobMove <= y)
                    {
                        canBobMove = true;
                        break;
                    }
                }
                if (!canBobMove)
                {
                    aliceWins = true;
                    break;
                }
            }
        }
        cout << (aliceWins ? "Alice" : "Bob") << "\n";
    }
    return 0;
}