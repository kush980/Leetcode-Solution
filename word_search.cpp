class Solution {
public:
    // int dr[4] = {-1,0,1,0};
    // int dc[4] = {0,-1,0,1};
    
    bool dfs(vector<vector<char>>&board,int x,int y,int index,vector<vector<bool>>&visited,string &word)
    {
        if(index >= word.length())
            return true;
        if(x>board.size()-1||x<0||y>board[0].size()-1||y<0||visited[x][y]==true || board[x][y]!=word[index])
            return false;
        visited[x][y]=true;
               // for(int i=0;i<4;i++)
        // {
        //     if(dfs(board,x+dr[i],y+dc[i],index+1,visited,word))
        //         return true;
        // } 
        if(dfs(board,x+1,y,index+1,visited,word) || dfs(board,x,y+1,index+1,visited,word) ||dfs(board,x-1,y,index+1,visited,word)||dfs(board,x,y-1,index+1,visited,word))
            return true; 
        visited[x][y]=false;
        return false;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>>visited(board.size(),vector<bool>(board[0].size(),false));
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(dfs(board,i,j,0,visited,word))
                    return true;
            }
        }
        return false;
    }
};