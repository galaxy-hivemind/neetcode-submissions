class Solution {
public:

    int determineBoxi(int i, int j){
        if(i < 3){
            if(j < 3) return 1;
            if(j < 6) return 2;
            if(j < 9) return 3;
        }
        if(i < 6) {
            if(j < 3) return 4;
            if(j < 6) return 5;
            if(j < 9) return 6;
        }
        if(i < 9) {
            if(j < 3) return 7;
            if(j < 6) return 8;
            if(j < 9) return 9;
        }

        return 0;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> hori(10, vector<int>(10));
        vector<vector<int>> verti(10, vector<int>(10));
        vector<vector<int>> boxi(10, vector<int>(10));

        for(int i = 0; i<9; i++){
            for(int j = 0; j<9; j++){
                int val = board[i][j];
                if(val == '.') continue;
                val -= '0';

                int boxiNum = determineBoxi(i, j);

                hori[i][val]++;
                verti[j][val]++;
                boxi[boxiNum][val]++;

                if(hori[i][val] > 1) return false;
                if(verti[j][val] > 1) return false;
                if(boxi[boxiNum][val] > 1) return false;
            }
        }

        return true;
    }
};
