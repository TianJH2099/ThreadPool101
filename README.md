# ThreadPool

## 1. Thread Pool

Productor-Consumer model

主要根据陈子青C++11多线程教程所写（[视频](https://www.bilibili.com/video/BV1d841117SH/?p=9&spm_id_from=pageDriver&vd_source=570ff1a15052703f27eac470febed0f9)、[网站](http://www.seestudy.cn/)）

## 2. knowledge point except thread pool

### 1. Lambda expression

Lambda表达式完整的声明格式如下：

```C++
[capture list] (params list) mutable exception-> return type { function body }
```

各项具体含义如下

1. capture list：捕获外部变量列表
2. params list：形参列表
3. mutable指示符：用来说用是否可以修改捕获的变量
4. exception：异常设定
5. return type：返回类型
6. function body：函数体

此外，我们还可以省略其中的某些成分来声明“不完整”的Lambda表达式，常见的有以下几种：

| 序号 | 格式                                                        |
| ---- | ----------------------------------------------------------- |
| 1    | [capture list] (params list) -> return type {function body} |
| 2    | [capture list] (params list) {function body}                |
| 3    | [capture list] {function body}                              |

### 2. Template

模板是泛型编程的基础，泛型编程即以一种独立于任何特定类型的方式编写代码。

模板是创建泛型类或函数的蓝图或公式。库容器，比如迭代器和算法，都是泛型编程的例子，它们都使用了模板的概念。

每个容器都有一个单一的定义，比如 **向量**，我们可以定义许多不同类型的向量，比如 **vector <int>** 或 **vector <string>**。

您可以使用模板来定义函数和类，接下来让我们一起来看看如何使用。

模板函数定义的一般形式如下所示：

```C++
template <typename type> ret-type func-name(parameter list)
{
   // 函数的主体
}
```

### 3. 万能应用、完美转发

我也没搞懂，先放这里
