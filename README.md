<div align="center">

# 📚 data_structure

**Classic data structures implemented in C++ templates**
**经典数据结构的 C++ 模板实现**

![C++](https://img.shields.io/badge/C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)
![Topic](https://img.shields.io/badge/Topic-Data%20Structures-success?style=flat-square)

</div>

---

## 📖 Overview · 简介

**English** — Hands-on implementations of the data structures covered in standard textbooks, written as C++ class templates with the textbook-style API.

**中文** — 按照数据结构参考书的章节，用 C++ 模板类逐一实现书中的结构，接口命名与教材保持一致。

## 🗺️ Roadmap · 进度

| Chapter · 章节 | Contents · 内容 | Status |
| --- | --- | :---: |
| [线性表 Linear List](线性表/) | `SeqList` 顺序表 · `LinkList` 单链表 · `DoublyLinkList` 双链表 | ✅ |
| [栈、队列和数组 Stack & Queue](栈、队列和数组/) | `SqStack` / `LiStack` 顺序栈/链栈 · `SqQueue` / `LinkQueue` 循环队列/链队列 | ✅ |
| 串 String | | ⏳ |
| 树和二叉树 Tree & Binary Tree | | ⏳ |
| 图 Graph | | ⏳ |
| 查找 Searching | | ⏳ |
| 排序 Sorting | | ⏳ |

## 🧩 Example API · 接口示例

```cpp
// 线性表 / Linear list
bool ListInsert(int i, T e);
bool ListDelete(int i, T& e);
int  LocateElem(T e);

// 栈 / Stack
bool Push(T x);
bool Pop(T& x);
bool GetTop(T& x);
```

Each chapter folder has its own README describing the full interface. 每个章节目录下都有单独的 README 说明完整接口。
