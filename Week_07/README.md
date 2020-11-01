学习笔记  
# 一、Trie树（字典树）  
## 1)Trie树模板  
   1、TrieNode数据结构成员：child_table(map)、end、TrieNode（):end(0)  
   2、Trie树常用操作：insert、search、find  
## 2)Trie树时间复杂度分析  
   建立trie的复杂度为O(n*len)，而建立+查询在trie中是可以同时执行的，建立的过程也就可以成为查询的过程，所以总的复杂度为O(n*len)，实际查询的复杂度也只是O(len)。  
   Trie树的平均高度h为len，所以Trie树的查询复杂度为O（h）=O（len）  
# 二、并查集（DisjoinSet）  
## 1)并查集模板  
    动态连通性  
    UF算法基本操作：union(int p,int q)、boolean connected（int p,int q)、int count（)  
    使用森林（若干树）来表示图的动态连接性，使用数组来具体实现这个森林
## 2）C++中并查集的实现  

   

  
