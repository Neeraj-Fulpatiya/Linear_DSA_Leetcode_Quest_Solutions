class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string>s;
        // see we made set so that no duplicates are there ,, you will undrstnd that in code below
        // one more thing to note that we will store strings in set as say "row19 "(means in row 1 ,9 has come), if this comes again means that the same row has encountered the 9 again

// note-- and this format we can store only using the string 

        for(int i=0;i<9;i++){// this is whaat it is
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){// we does not care for the .(dots), as they have no significance
                    
                    string row="row"+to_string(i)+board[i][j];// making the row in string format, same with col and box
                    string col="col"+to_string(j)+board[i][j];
                    string box="box"+to_string((i/3)*3+j/3)+board[i][j];// this formula u can have derivation by your way ,, bs ye smj jao baki kaam kuch ni h 
                    
                   
                   if(s.find(row)==s.end() && s.find(col)==s.end()&& s.find(box)==s.end()){//this means i try to find 3 of these and unable to find , so now we cna insert
                    s.insert(row);

                    s.insert(col);
                    s.insert(box);
                   }

                   else{// if any of the row , col , box has the same val then this will execute
                    return false;
                   }

                }

            }
        }
        return true;// if nothing has gone to flase then therefore suduko is valid 
    }
};