# 算法设计基础

##搜索：通用（万能）的解题方法

###多项式空间搜索
- 线性搜索： 
- 二维搜索
- 多维搜索

###子集空间
- 二进制枚举
- **深度优先搜索DFS**

###全排列空间
- next_permutation/prev_permutation
- **深度优先搜索DFS**
```
#include <bits/stdc++.h>
using namespace std;
const int N = 4;
int a[N];
int used[N] = {0};

void dfs(int k) {
  if (k == N) {
    int i;
    for (i = 0; i < k; i++)
      if (used[i]) cout << a[i] << " ";
    cout << endl;
    return;
  }
  int i;
  for (i = 0; i < N; i++)
    if (used[i] == 0) {
      used[i] = 1;
      a[i] = k;
      dfs(k + 1);
      used[i] = 0;
    }
}
int main() {
  dfs(0);
  return 0;
}

```

##算法优化策略
### 排序和二分算法//有序，单调
- 排序
- 二分搜索
- 二分答案

### 贪心算法 
- 多任务安排
- 找零钱

### **动态规划** //利用存储优化
- 静态规划 **打表法**
- 边算边存 **动态规划**

