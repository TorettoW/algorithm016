学习笔记
## 一、贪心算法  
  贪心算法只能当下做局部最优判断，回溯能够回退，动态规划是最优判断与回退。  
  贪心算法经常用于：1、求图中的最小生成树；2、求哈夫曼编码。  
  适用场景为最优子结构，该方法的难点在于如何证明用贪心法。  
  贪心法的妙用：1、从后往前贪心；2、从某一局部切入进行贪心。  
## 二、二分查找  
### 二分查找三个前提条件：   
  1、目标函数单调性  
  2、存在上下界  
  3、能够通过索引访问  
### 二分查找比较好的解法：  
  1、牛顿迭代法  
    public static double sqrt(double c)  
    {  
	   if(c<0) return Double.NaN;  
	   double err = 1e-15;//精度   
	   double t = c;//赋初值  
	   while(Math.abs(t*t - c)>err*t)//控制迭代精度  
		 t = (c/t+t)/2.0;//迭代公式  
	   return t;  
    }  
  2、旋转数组  
    先是局部递增，然后两个数递减（数组中最大和最小数),最后一个局部递增。    
    left < mid < right : right = mid;  
    right < left < mid : left = mid + 1;  
    mid < right < left : right = mid;  
