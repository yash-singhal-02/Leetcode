class Solution {
public:
    void dfshelper(int city,vector<vector<int>>& isConnected, vector<bool>& visited){
        visited[city] = true;
        for(int i=0;i<isConnected.size();i++){
            if(isConnected[city][i] == 1 && !visited[i]){
                dfshelper(i,isConnected,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
         int n = isConnected.size();
         vector<bool> visited(n,false);
         int cnt = 0;
         for(int i=0;i<n;i++){
            if(!visited[i]){
                dfshelper(i,isConnected,visited);
                cnt++;
            }
         }
         return cnt;
    }
};