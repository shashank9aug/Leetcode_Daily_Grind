class Solution {
private:
    bool isCycleDFS(int node,vector<int>adj[],vector<int>&visited,vector<int>&dfsvis){
        visited[node]=1;
        dfsvis[node]=1;
        for(auto it:adj[node]){
            if(!visited[it]){
                if(isCycleDFS(it,adj,visited,dfsvis)) return true;
            }
            else if(dfsvis[it]){
                return true;
            }
        }
        //unmark if we not get cycle for next node dfs call
        dfsvis[node]=0;
        return false;
    }
public:
    bool canFinish(int nCourse, vector<vector<int>>&prerequisites){
        vector<int>adj[nCourse];
        for(auto p:prerequisites){
            adj[p[0]].push_back(p[1]);
        }
        vector<int>vis(nCourse,0);
        vector<int>dfsVis(nCourse,0);
        for(int i=0;i<nCourse;i++){
            if(vis[i]==0){
                if(isCycleDFS(i,adj,vis,dfsVis)==true){
                    return false;
                }
            }
        }
        return true;
    }
};