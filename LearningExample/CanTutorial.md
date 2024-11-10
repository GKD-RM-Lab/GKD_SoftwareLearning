## 这里会教大家如何使用 C++ 与电机进行 can 通信
对于 can 通信是什么，我们这里不过多赘述，大家可以自行上网搜索了解（ 当然，作为 RMer，我们要具有工程思维，只要粗浅了解原理，会用即可。这也得益于我们硬件组的同学，为我们提供了良好的条件，可以即插即用的 usb2can ）

首先进行软件更新
```
sudo apt-get update && sudo apt-get -y upgrade
```
安装所需依赖软件包
```
sudo apt-get install -y can-utils net-tools
```
将 usb2can 和自己的电脑连接。查看是否检测到 can 设备（ 在列表中看到带有 can 名称的设备说明你的电脑正常识别了 can 设备 ）
```
ifconfig -a
```
进行 can 设备初始化（ 示例为初始化 can0 和 can1 ）
```
sudo ip link set can0 up type can bitrate 1000000
```
```
sudo ip link set can1 up type can bitrate 1000000
```
