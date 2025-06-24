class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ret = 0;
        set<pair<int, int>> visited;
        int ySize = grid.size();
        int xSize = grid[0].size();
        vector<pair<int, int>> directions = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};
        pair<int, int> val;

        for (int i = 0; i < ySize; i++) {
            for (int j = 0; j < xSize; j++) {
                val = {j, i};
                if (visited.find(val) == visited.end() && grid[i][j] == '1') {
                    //cout << "hi mom" << endl;
                    ret++;
                    visited.insert(val);
                    mapQueue(j, i, xSize, ySize, directions, visited, grid);
                }
            }
        }

        return ret;
    }

    void mapQueue(int x, int y, int xSize, int ySize, vector<pair<int, int>> &directions, set<pair<int, int>> &visited, vector<vector<char>> &grid) {
        queue<pair<int, int>> worklist;
        worklist.push({x, y});
        

        while (!worklist.empty()) {
            pair<int, int> item = worklist.front();
            worklist.pop();    

            for (auto dir : directions) {
                int first = item.first + dir.first;
                int second = item.second + dir.second;
                pair<int, int> val = {first, second};
                if (first >= 0 && first < xSize && second >=0 && second < ySize && grid[second][first] == '1' && visited.find(val) == visited.end()) {
                    //cout << val.first << " " << val.second << endl;
                    worklist.push(val);
                    visited.insert(val);
                }
            }

        }
    }
};