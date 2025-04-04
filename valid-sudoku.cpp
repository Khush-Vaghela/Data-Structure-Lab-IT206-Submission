class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        set<char> s1;
        set<char> s2;

        int prev1, prev2;

        for(int i = 0; i < 9; i++){

            for(int j = 0; j < 9; j++){

                prev1 = s1.size();
                if(board[i][j] != '.'){
                    s1.insert(board[i][j]);
                    if(s1.size() == prev1){

                        return false;
                    }
                    prev1 = s1.size();
                }

                prev2 = s2.size();
                if(board[j][i] != '.'){
                    s2.insert(board[j][i]);
                    if(s2.size() == prev2){

                        return false;
                    }
                    prev2 = s2.size();
                }
            }

            s1.clear();
            s2.clear();
        }

        s1.clear();
        for(int i = 0; i < 7; i += 3){

            for(int j = 0; j < 7; j += 3){

                for(int k = 0; k < 3; k++){

                    for(int l = 0; l < 3; l++){

                        prev1 = s1.size();
                        if(board[k + i][l + j] != '.'){
                            s1.insert(board[k + i][l + j]);
                            if(s1.size() == prev1){

                                return false;
                            }
                            prev1 = s1.size();
                        }
                    }
                }

                s1.clear();
            }
        }
        
        return true;
    }
};
