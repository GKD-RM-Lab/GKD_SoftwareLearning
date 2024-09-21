## 这里会教你编写出第一个程序，在命令行中编译输出Hello GKD！
首先进入我们的工作空间
```
cd ~/GKD_WorkSpace
```
创建文件夹并进入
```
mkdir HelloGKD && cd HelloGKD
```
创建代码文件
```
touch HelloGKD.cc
```
使用命令行编辑器vi尽行代码编辑（当然，你可以使用VSCode或者Clion）
```
vi HelloGKD.cc
```
你可以参考以下代码
```
#include <iostream>

int main() {
    std::cout << "Hello GKD!" << std::endl;
}
```
此时在vi中，你处在normal模式（你无法进行编辑，这个模式下的操作可以在网上搜索进行稍加学习），按`i`进入insert模式，编辑完你的代码过后按`esc`回到normal模式，再使用`:wq`进行保存退出

当然你也可以复制完上面的代码后，在normal模式使用`<ctrl> + <shift> + v`进行粘贴，然后保存退出

此时，你应当已经返回命令行中了，使用g++编译它并生成二进制文件
```
g++ HelloGKD.cc -o sayhello
```
运行
```
./sayhello
```
现在你应该已经看到打印出来的内容了。我们可以将这个文件夹删掉了
```
rm -rf ~/GKD_WorkSpace/HelloGKD
```