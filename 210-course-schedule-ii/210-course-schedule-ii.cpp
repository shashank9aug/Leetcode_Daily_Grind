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
    bool isCycle(int nCourse,vector<int>adj[]){
        vector<int>vis(nCourse,0);
        vector<int>dfsVis(nCourse,0);
        for(int i=0;i<nCourse;i++){
            if(vis[i]==0){
                if(isCycleDFS(i,adj,vis,dfsVis)){
                    return true;
                }
            }
        }
        return false;
    }
    vector<int> findOrder(int nCourse, vector<vector<int>>& prerequisites) {
        vector<int>adj[nCourse];
        for(auto p:prerequisites){
            adj[p[1]].push_back(p[0]);
        }

        if(isCycle(nCourse,adj)){
            return {};
        }

        queue<int>q;
        vector<int>indegree(nCourse,0);
        //store indegree of each node :
        for(int i=0;i<nCourse;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        //push only node have indegree 0
        for(int i=0;i<nCourse;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        //BFS :
        vector<int>topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        return topo;
    }
};