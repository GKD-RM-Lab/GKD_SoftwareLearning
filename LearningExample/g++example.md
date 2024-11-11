## 这里会教大家编写出第一个程序，在命令行中编译输出 Hello GKD！
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
使用命令行编辑器 `vi` 进行代码编辑（ 当然，我们非常推荐你使用 VSCode 或者 Clion ）
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
此时在 vi 中，你处在 normal 模式（ 你无法进行编辑，这个模式下的操作可以在网上搜索进行稍加学习 ），按 `i` 进入 insert 模式，编辑完你的代码过后按 `esc` 回到 normal 模式，再使用 `:wq` 进行保存退出

当然你也可以复制完上面的代码后，在 normal 模式使用 `<ctrl> + <shift> + v` 进行粘贴，然后保存退出

此时，你应当已经返回命令行中了，使用 g++ 编译生成二进制文件
```
g++ HelloGKD.cc -o sayhello
```
使用命令查看当前文件夹下的文件
```
ls
```
我们可以看到我们编译出来的二进制文件，运行它
```
./sayhello
```
现在你应该已经看到打印出来的内容了,我们可以将这个文件夹删掉了
```
rm -rf ~/GKD_WorkSpace/HelloGKD
```