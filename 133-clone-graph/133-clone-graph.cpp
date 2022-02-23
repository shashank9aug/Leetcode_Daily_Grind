/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
private:
    Node* dfs(Node*temp,unordered_map<Node*,Node*>&ump){
        vector<Node*>neighbor;
        Node*clone = new Node(temp->val);
        ump[temp] = clone;
        for(auto it:temp->neighbors){
            if(ump.find(it)!=ump.end()){
                neighbor.push_back(ump[it]);
            }
            else{
                //visit the neighbour of curr node
                neighbor.push_back(dfs(it,ump));
            }
        }
        clone->neighbors = neighbor;
        return clone;
    }
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL){
            return NULL;
        }
        //if size of graph node has no neighors
        if(node->neighbors.size()==0){
            Node*clone = new Node(node->val);
            return clone;
        }
        unordered_map<Node*,Node*>ump;
        return dfs(node,ump);
    }
};