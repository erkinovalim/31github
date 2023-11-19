#include <bits/stdc++.h>

using namespace std;

struct ChessMove
{
    string pieceType;
    string startingSquare;
    string targetSquare;
    ChessMove(string pt, string ss, string ts)
    {
        pieceType = pt;
        startingSquare = ss;
        targetSquare = ts;
    }
    
    string MoveNotation()
    {
        return pieceType[0] + targetSquare;
    }
};

int main()
{
    ChessMove move("King", "g4", "g5");
    string notation = move.MoveNotation();
    cout<<notation;
}