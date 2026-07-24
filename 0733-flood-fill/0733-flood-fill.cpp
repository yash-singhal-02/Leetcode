class Solution {
public:
    void dfs(vector<vector<int>>&image, int r,int c,int color,int originalcolor){
        int n = image.size();
        int m = image[0].size();
        if(r < 0 || r >= n || c < 0 || c >= m) return;
        if(image[r][c] != originalcolor) return;
        image[r][c] = color;
        dfs(image,r - 1,c,color,originalcolor);
        dfs(image,r + 1,c,color,originalcolor);
        dfs(image,r,c + 1,color,originalcolor);
        dfs(image,r,c - 1,color,originalcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int originalcolor = image[sr][sc];
        if(originalcolor == color){
            return image;
        }
        dfs(image,sr,sc,color,originalcolor);
        return image;
    }
};