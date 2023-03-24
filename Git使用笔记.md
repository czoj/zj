# Git使用笔记

​    git安装完成之后打开Git-->Git Bash，使用git config --global user.name与user.email天蝎用户名与邮箱作为一个标识。每次Git提交都会使用该信息，他被永久嵌入到了你的提交中。这是必须要配置的，不这么做提交不了项目。

## 一、一些常用的Linux指令

​    1）cd ..回退到上一个目录

![image-20230318110713514](C:\Users\zj\AppData\Roaming\Typora\typora-user-images\image-20230318110713514.png)

​    2）cd改变目录

![image-20230318111043068](C:\Users\zj\AppData\Roaming\Typora\typora-user-images\image-20230318111043068.png)

3）pwd：显示当前所在的目录路径

![image-20230318111218183](C:\Users\zj\AppData\Roaming\Typora\typora-user-images\image-20230318111218183.png)

4）clear清屏

5）touch：新建一个文件

![image-20230318162947282](C:\Users\zj\AppData\Roaming\Typora\typora-user-images\image-20230318162947282.png)

6）rm：删除一个文件，如入门index.js就会把index.js文件删除

7）ls：列出当前文件夹中的所有文件

![image-20230318163334590](C:\Users\zj\AppData\Roaming\Typora\typora-user-images\image-20230318163334590.png)

8）mkdir：新建一个目录（文件夹）

9）rm-r：删除一个文件夹（rm -rf切勿在Linux中尝试！删除所有文件）

10）mv 移动文件，移动的文件与目标文件夹要在同一目录下。

![image-20230318164111633](C:\Users\zj\AppData\Roaming\Typora\typora-user-images\image-20230318164111633.png)

11）reset重新初始化终端/清屏

12）history查看命令历史

13）help帮助

14）exit退出

15）#表示注释

## 二、Git的使用

#### 1、工作区域

工作目录( Working Directory )、暂存区(Stage/Index)、资源库(Repository或Git Directory)

![image-20230318165800099](C:\Users\zj\AppData\Roaming\Typora\typora-user-images\image-20230318165800099.png)

#### 2、项目创建

##### （1）创建

1）git inti初始化本地仓库

2）git clone克隆远程仓库

![image-20230318170528081](C:\Users\zj\AppData\Roaming\Typora\typora-user-images\image-20230318170528081.png)

##### （2）文件状态

1）git status #查看所有文件状态（Git status [filename]   #查看指定文件状态）

2）git add .  添加所有文件到缓存区

3）git commit -m "消息内容"     提交缓存区中的内容到本地仓库

##### （3）忽略文件

![image-20230318171603960](C:\Users\zj\AppData\Roaming\Typora\typora-user-images\image-20230318171603960.png)







