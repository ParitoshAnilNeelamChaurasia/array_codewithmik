// https://leetcode.com/problems/valid-sudoku/

class Solution {
public:
    bool traversal(int sr , int er , int sc , int ec , vector<vector<char>> &board)
    {
        set<char> st;
        for(int i = sr ; i <= er ; ++i)
        {
            for(int j = sc ; j <= ec ; ++j)
            {
                if(board[i][j] == '.')
                {
                    continue ;
                }
                if(st.find(board[i][j]) != st.end())
                {
                    return false ;
                }
                st.insert(board[i][j]) ;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int m = board.size() ;
        int n = board[0].size() ;
        
        // row checking
        for(int i = 0 ; i < 9 ; ++i)
        {
            set<char> st ;
            for(int j = 0 ; j < 9 ; ++j)
            {
                if(board[i][j] == '.')
                {
                    continue ;
                }
                if(st.find(board[i][j]) != st.end())
                {
                    return false ;
                }
                st.insert(board[i][j]) ;
            }
        }

        // column checking
        for(int j = 0 ; j < 9 ; ++j)
        {
            set<char> st ;
            for(int i = 0 ; i < 9 ; ++i)
            {
                if(board[i][j] == '.')
                {
                    continue ;
                }
                if(st.find(board[i][j]) != st.end())
                {
                    return false ;
                }
                st.insert(board[i][j]) ;
            }
        }

        // grid checking
        // int er= 0 , ec = 0 ;
        for(int i = 0 ; i < 9 ; i = i+3)
        {
            int er = i + 2;
            for(int j = 0 ; j < 9 ; j = j + 3)
            {
                int ec = j + 2 ;

                if(!traversal(i,er,j,ec,board) )
                {
                    return false;
                }
            }
        }
        return true ;
    }
};
