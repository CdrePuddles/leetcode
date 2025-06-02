#include <set>
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        // bfs approach
        set<string> visited;
        string coord;
        int islands = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        vector<pair<int, int>> directions = {{1,0}, {-1,0}, {0, 1}, {0, -1}};

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                coord = to_string(i) + "," + to_string(j);
                if (grid[i][j] == '1' && visited.find(coord) == visited.end()) {
                    visited.insert(coord);
                    islands++;

                    bfs(grid, i, j, rows, cols, directions, visited);
                }
            }
        }

        return islands;
    }

private:
    void bfs(vector<vector<char>>& grid, int i, int j, int rows, int cols, vector<pair<int, int>> directions, set<string> &visited) {
        queue<pair<int, int>> q;
        string coord;

        q.push(make_pair(i,j));

        while (!(q.empty())) {
            auto[row, col] = q.front();
            q.pop();

            for (auto xy : directions) {
                int y = row + xy.first;
                int x = col + xy.second;
                coord = to_string(y) + "," + to_string(x);

                if (y >= 0 && y < rows && x >= 0 && x < cols && grid[y][x] == '1' && visited.find(coord) == visited.end()) {
                    cout << coord << endl;
                    visited.insert(coord);
                    q.push(make_pair(y, x));
                }
            }

        }
    }
};