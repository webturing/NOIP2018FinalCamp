##动态规划
- 搜索优化：提前剪枝
- 利用存储来避免重复计算
- 打表或者记忆化搜索，自顶向下归约，自下而上计算
### 状态转移方程
- （一般为一个或者多个相互递推的方程（组））
- 根据参数的个数
####一维dp：（前缀和、打表）
- 骨牌覆盖：
- 最优找零（贪心算法使用的前提）
- 导弹拦截：最长上升子序列
####二（多）维dp
- 数字三角形
- 组合约束和优化
- 背包问题（完全背包、01背包）
- 数位dp 

##图论算法
### 一、图的存储
- 邻接矩阵 （顶点数<1000）q
- 邻接表 （vector存储相邻顶点）
- 链式前向星 （head数组初始化-1 add函数添加边）

### 二、图的遍历
- DFS 深度优先搜索 （栈）
- BFS 广度优先搜索 （队列）
    
### 三、最短路径
- Dijkstra算法（迪杰斯特拉算法） **单源最短路径** 贪心
- Floyd算法（佛洛依德算法）**多源最短路算法** 动态规划
    
### 最小生成树
- prim算法（普里姆算法） 动态规划 松弛
- Kruskal算法 （克鲁斯卡尔算法）并查集


