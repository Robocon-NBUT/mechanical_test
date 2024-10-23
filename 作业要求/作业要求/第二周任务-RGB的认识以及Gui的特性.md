# 视觉第二周任务

11月3日 颜色空间的认识及opencv中gui的特性

==**前提：下载软件Typora，再打开任务文件夹下的.md文件，查看完整任务文档。**==

下载Typora教程：[教程](https://blog.csdn.net/m0_57787115/article/details/129140535?ops_request_misc=%7B%22request%5Fid%22%3A%22169821629016800188526282%22%2C%22scm%22%3A%2220140713.130102334..%22%7D&request_id=169821629016800188526282&biz_id=0&utm_medium=distribute.pc_search_result.none-task-blog-2~all~top_positive~default-1-129140535-null-null.142^v96^pc_search_result_base9&utm_term=typora下载&spm=1018.2226.3001.4187)

## 任务要求

1.阅读《OpenCV-Python-Toturial》第Ⅱ章，并自行查找OpenCV中的鼠标触发事件和键盘触发事件知识。

2.==阅读后面的链接，对RGB，HSV，LAB颜色空间有相对认识。对后面的视觉学习很重要！==[常见的图像颜色空间解释 - Sipeed Wiki](https://wiki.sipeed.com/news/others/color_introduction/color_introduction.html)

3.在一张白色背景（255，255，255）的image中，利用滑动条选择颜色（rgb）,用鼠标左键画矩形，右键画圆。

4.实现按键切换画图模式，将左键的画矩形拓展为，按下键盘数字键1画填充矩形，按下键盘数字键2画不填充矩形，如示例视频所示。绘制图形和效果可与视频不同。

5.使用三种颜色，绘制一个圆形，一个填充矩形，一个不填充矩形，效果截图。

<img src=https://i.loli.net/2021/12/03/1RNBQrKOg7PhFtU.gif width=50% />

额外附加题（选做，不讲解）：

1.画不填充矩形框时，绘制过程中，矩形可见。不是鼠标松开后才出现图形。

提示：鼠标按下绘制时清除前一帧绘制的矩形，再绘制新一帧的矩形。具体参考 画图（win10自带软件） 中的矩形绘制效果。

<img src=https://i.loli.net/2021/12/03/urfqWaOA1oVRj6k.gif width=50% />

## 提交格式

截止时间：11月10号周五晚上8点

提交word和py代码(word中包含==关键代码与设计讲解==，以及效果图片)

word可由markdown文档代替。

*代码写好注释

*最终上传群文件夹 “第二周任务提交文件夹”，命名格式： ==第x周专业班级-姓名==

*并且上传至gitlab视觉培训仓库中

