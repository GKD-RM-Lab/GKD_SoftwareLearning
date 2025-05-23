# GKD_SoftwareLearning
![gkdlogo](./Images/LOGO.jpg)
### 欢迎大家加入 GKD 大家庭！本仓库用于 GKD 软件组（ 现分为控制组、算法组 ）学习，以下是我们推荐的学习路径，当然如果你的基础足够强大，你可以选择直接跳到最后进行我们的测试

## 我该如何提问
+ 请仔细阅读 [提问的智慧](https://github.com/ryanhanwu/How-To-Ask-Questions-The-Smart-Way/blob/master/README-zh_CN.md) 跟 [别像弱智一样提问](https://github.com/tangx/Stop-Ask-Questions-The-Stupid-Ways/blob/master/README.md)，遇到问题先尝试自己解决（ 当然，遇到无法解决的问题，也非常欢迎你们来提问，但请不要问在网络上可以轻易搜索到结果的问题 ）

## 安装Linux
+ 安装 Ubuntu24.04或22.04，可以去 bilibili 搜索教程。***建议安装物理双系统，不要使用虚拟机***

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
![我要成为 c++ 高手](./Images/c++master.jpg)

+ 建议学习 c++ ( 尤其是有 c 语言基础的同学 )
+ 实在不知道看哪一个 c++ 教程，我们（ 其实只有zzm ）向你推荐 [这个教程](https://www.youtube.com/watch?v=18c3MTX0PK0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)（ b 站上搜索 cherno c++ 有带中文字幕的教程 ）
+ 我们会在这个 [代码训练仓库](https://github.com/GKD-RM-Lab/rmNewBee) 持续发布一些简单的代码练习，这些代码练习将尽量与后续控制或视觉组的工作有关
+ 同时我们的视频教程已经发布在了 b站: [西南大学 GKD 机器人队](https://space.bilibili.com/316407854?spm_id_from=333.337.0.0)

## 控制组
对于控制组而言，最重要的就是如何控制电机。首先控制一个电机所需要的前置知识为以下几部分
+ 首先我们的主控与电机之间的通信使用的是 [can 通信](./LearningExample/CanTutorial.md)
+ 理解机器人各部分之间的 [走线拓扑](./LearningExample/CircuitTopology.md)
+ 我们控制电机的主要控制算法为 [PID](./LearningExample/PIDTutorial.md)
### 电机的控制
我们的 [电机驱动依赖库](https://github.com/GKD-RM-Lab/ControlLib) 应是各位在学习如何驱动电机上的第一手资料，里面会详细给大家介绍如何使用我们的库来驱动电机 ( 现在的 [电控仓库](https://github.com/GKD-RM-Lab/GKD_Control) 也已经进行了更新, 可以直接学习! )

## 算法组
为了熟悉我们机器人的构造，请算法组的同学也先学习一下控制组中的 [走线拓扑](./LearningExample/CircuitTopology.md)，然后可以根据你的兴趣进行选择学习导航或自瞄

### 自瞄
感谢北洋机甲提供的自瞄方案 ( 磕头了! ), 我们的自瞄仅在北洋机甲提供的方案上做了适配
+ [自瞄框架](https://github.com/GKD-RM-Lab/TJURM-2024-gkd)
+ [自瞄算法库](https://github.com/GKD-RM-Lab/OpenRM2024-gkd)

如果你想先进行学习再看代码, 以下是一些我们认为非常有用的资料

+ [了解 CV 和 RoboMaster 视觉组](https://github.com/NeoZng/vision_tutorial/blob/main/了解CV和RoboMaster视觉组.md)（ 给跃鹿算法组各位大佬磕头了，写的实在是太好了 ）
+ [基于传统算法的视觉识别](https://openatomworkshop.csdn.net/6645b6b1b12a9d168eb6de37.html?spm=1001.2101.3001.6650.1&utm_medium=distribute.pc_relevant.none-task-blog-2%7Edefault%7Ebaidujs_utm_term%7Eactivity-1-123112639-blog-88530186.235%5Ev43%5Epc_blog_bottom_relevance_base1&depth_1-utm_source=distribute.pc_relevant.none-task-blog-2%7Edefault%7Ebaidujs_utm_term%7Eactivity-1-123112639-blog-88530186.235%5Ev43%5Epc_blog_bottom_relevance_base1&utm_relevant_index=2)（ 磕头磕头 ）
+ [北洋机甲自瞄框架](https://github.com/HHgzs/TJURM-2024)
+ [北洋机甲视觉算法库](https://github.com/HHgzs/OpenRM-2024)（ 跪谢北洋机甲开源的原生 c++ 自瞄算法框架 ）
### 导航
导航部分没有参照大多数学校使用 ROS, 使用原生 c++ 方案
+ [导航算法库](https://github.com/GKD-RM-Lab/AutoSentry)

主要用到了以下一些库进行移植
+ [全局点云扫描](https://github.com/hku-mars/FAST_LIO)
+ [mid360 雷达 sdk](https://github.com/Livox-SDK/Livox-SDK2)
+ [点云匹配 PCL 库](https://github.com/PointCloudLibrary/pcl)
+ [使用并发加速点云匹配的库](https://github.com/koide3/ndt_omp)
+ [C++ 用于计算变换矩阵的矩阵库](https://github.com/PX4/eigen)
+ [用于将三维点云处理成栅格图的图像库](https://github.com/opencv/opencv)
+ [A* 用于平面图路径规划](https://cn.bing.com/search?q=A*)
  + [A* 进阶](https://zhuanlan.zhihu.com/p/362099202)
+ [路径平滑算法](https://zhuanlan.zhihu.com/p/364421182)
  + [目前采用的平滑算法](https://www.researchgate.net/publication/269785358_A_Collision-Free_G_Continuous_Path-Smoothing_Algorithm_Using_Quadratic_Polynomial_Interpolation)

## 这些任务我都做完了
如果这些任务你们都做完了，那么恭喜你已经具有了在 GKD 进行工作的能力，欢迎你们这时候来和我们线下聊一聊，并向我们展示你的工作（ 主要关于你这段时间所进行的学习 ）

## 前面的任务太简单了
如果你的基础很强大，那么你可以选择跳过前面的所有学习路径。直接完成我们的 [考核题目](./NeoRMControl_OneForALL-newbee)。当你通过考核后，将正式加入 GKD 大家庭中