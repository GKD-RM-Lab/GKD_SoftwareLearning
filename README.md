# GKD_SoftwareLearning
![gkdlogo](./Images/LOGO.jpg)
### 欢迎大家加入 GKD 大家庭！本仓库用于 GKD 软件组（ 现分为控制组、算法组 ）学习，以下是我们推荐的学习路径，当然如果你的基础足够强大，你可以选择直接跳到最后进行我们的测试

## 我该如何提问
+ 请仔细阅读[提问的智慧](https://github.com/ryanhanwu/How-To-Ask-Questions-The-Smart-Way/blob/master/README-zh_CN.md)跟[别像弱智一样提问](https://github.com/tangx/Stop-Ask-Questions-The-Stupid-Ways/blob/master/README.md)，遇到问题先尝试自己解决（ 当然，遇到无法解决的问题，也非常欢迎你们来提问，但请不要问在网络上可以轻易搜索到结果的问题 ）

## 安装Linux
+ 安装 Ubuntu24.04，可以去 bilibili 搜索教程。***建议安装物理双系统，不要使用虚拟机***

## 科学上网
+ 安装配置科学上网软件，需要能正常访问使用 [Google](https://google.com/)、[ChatGPT](https://chat.openai.com/)、[Github](https://github.com) 等网络服务
+ 更换你的搜索引擎，***不要使用 Baidu！会很影响你的搜索效率！！！*** 建议使用 Bing、Google
+ 不会的内容可以先 [ChatGPT](https://chat.openai.com/)，但不要完全相信
+ [这里是我们的代码仓库](https://github.com/zzLinus/NeoRMControl_OneForALL)，记得给我们一个 star，这可以让你们更快找到我们的仓库（ 求你了，给个 star 吧 ）

## 配置环境
+ 建议使用 VSCode、Clion 作为你们的开发环境
+ 安装配置 git、ssh、gcc、g++、cmake

当你配置完这些后，就基本可以开始工作了！

首先打开 Terminal，你可以选择在 home 目录创建一个文件夹作为你的工作空间，后面我们所有的工作都会在这个文件夹中进行
```
mkdir ~/GKD_WorkSpace
```
+ [第一个程序 HelloGKD](./LearningExample/g++example.md)
+ [编译我们的代码](./LearningExample/BuildOurRMRepo.md)

## 学习c/c++
+ 有不错的编程基础，你可以直接学习 c++
+ 如果你刚开始接触编程可以先学 c 语言（ ***但请注意，请不要按照学校的教学进度进行学习，否则你将无法快速融入GKD！*** ）
+ 实在不知道看哪一个 c++ 教程，我们（ 其实只有zzm ）向你推荐[这个教程](https://www.youtube.com/watch?v=18c3MTX0PK0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)（ b 站上搜索 cherno c++ 有带中文字幕的教程 ）

## 控制组
对于控制组而言，最重要的就是如何控制电机。首先控制一个电机所需要的前置知识为以下几部分
+ 首先我们的主控与电机之间的通信使用的是 [can 通信](./LearningExample/CanTutorial.md)
+ 理解机器人各部分之间的 [走线拓扑](./LearningExample/CircuitTopology.md)
+ 我们控制电机的主要控制算法为 [PID](./LearningExample/PIDTutorial.md)

## 算法组
可以根据你的兴趣进行选择学习导航或自瞄
### 自瞄
### 导航
To be continued ...

## 这些任务我都做完了
如果这些任务你们都做完了，那么恭喜你已经具有了在 GKD 进行工作的能力（ 恭喜成为了一名人类，毕竟人与动物的最大差别就是会使用工具，当然 just joking ） 欢迎你们这时候来和我们线下聊一聊，并向我们展示你的工作（ 主要关于你这段时间所进行的学习 ）

## 前面的任务太简单了
如果你的基础很强大，那么你可以选择跳过前面的所有学习路径。直接完成我们的[考核题目](./NeoRMControl_OneForALL-newbee)。当你通过考核后，将正式加入GKD大家庭中