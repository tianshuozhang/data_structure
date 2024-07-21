### 栈

栈是线性数据结构，具有先进后出的特点，这里采用顺序结构(`SqStack`)和链式结构(`LiStack`)两种方法实现，其中顺序结构采用静态数组，分别实现了一下基本操作：

- `void InitStack();`
- `bool StackEmpty();`
- `bool Push(T x);`
- `bool Pop(T& x);`
- `bool GetTop(T& x);`

### 队列

队列是线性数据结构，具有先进先出的特点，这里采用顺序结构(`SqQueue`)和链式结构(`LinkQueue`) 两种方法实现，其中顺序结构采用静态数组，分别实现了以下基本操作：

- `void InitQueue();`
- `bool isEmpty();`
- `void EnQueue(T x);`
- `bool DeQueue(T& x);`

### 数组

