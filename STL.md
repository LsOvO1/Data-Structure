# vector
## vector中push_back和pop_back的区别和作用
### Push _back  #push_back

`push_back` 函数用于在 `vector` 的末尾添加一个元素。如果 `vector` 需要更多的空间来存储新元素，它会自动分配更多的内存。

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec;

    // 添加元素
    vec.push_back(10);
    vec.push_back(20);

    // 输出vector内容
    for (int i : vec) {
        std::cout << i << " ";
    }
    return 0;
}
```

输出将是：

```text
10 20
```
### Vector容器的多种定义方式及其应用
#### 在vector容器中可以定义一个（）形式来表示你要将前者相同的值累加到第二个值
	前者代表定义的容器的长度大小 ，后者代表默认值 ，一定程度上可以当做类似pair的使用方法 在一定的问题环境中有奇效
```cpp
vector<int> a(k , 0);

    for(int i = 0 ; i < k; i++){

        cin >> b >> c;

        a[b - 1] += c;

    } //在这个代码块中就是将b相等的所有C累加到b这个容器中 
```

### Pop _back #pop_back

`pop_back` 函数用于删除 `vector` 末尾的元素。如果 `vector` 是空的，调用 `pop_back` 会导致未定义行为。

```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec = {10, 20, 30};

    // 删除最后一个元素
    vec.pop_back();

    // 输出vector内容
    for (int i : vec) {
        std::cout << i << " ";
    }
    return 0;
}
```

输出将是：

```text
10 20
```

# pair  #pair

- pair 是 C++ 标准库中的类模板，用于表示一个有序的键值对。它通过将两个值组合在一起，形成一个元素。
- 它允许你存储一对值，这两个值可以是相同类型或者不同类型。`std::pair`通常用于存储两个相关联的数据项，例如，你可能需要存储一个值及其索引，或者一个点的坐标（x, y）等。
```cpp
vector<pair<int , int>> vec(m);

    for(int i = 0; i < m; i++) cin >> vec[i].first >> vec[i].second;

    sort(vec.begin() , vec.end() , [&](const pair<int, int>& a, const pair<int, int>& b){

        return a.first < b.first;

    });  // 等价 sort(vec.begin() , vec.end()) 在pair容器里面默认排序方式按照第一个值   以后遇到这种类似问题 单价放在第二个输入也可以将输入first second 倒一下 用sort可以直接排序 不需要重载
```