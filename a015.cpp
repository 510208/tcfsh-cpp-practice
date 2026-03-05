#include <iostream>
using namespace std;

int main(int argc, char const* argv[]) {
    int row, col; // row是橫列，col是直行
    
    while (cin >> row >> col) {
        int square[row][col];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cin >> square[i][j];
            }
        }

        int coveredSquare[col][row];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                coveredSquare[j][i] = square[i][j];
            }
        }

        for (int i = 0; i < col; i++) {
            for (int j = 0; j < row; j++) {
                cout << coveredSquare[i][j] << " ";
            }
            cout << endl;
        }
    }
}
