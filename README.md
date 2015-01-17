LDE-Stable
===
本代码库存放的将是 LDE 0.x-1.8 的稳定分支代码，Testing 分支请前往 LDE 代码库 https://github.com/xuzhuoyi/LDE

由于 Qt 5.4 以后的的版本将停止对 Webkit 的支持，转而使用基于 Chromium 浏览器引擎的 Qt WebEngine，以实现对于 Qt 与 HTML5 混合开发的支持，Qt 5 与 Qt 4 的不兼容性越来越大。为了确保用户体验， LDE 正在从 Qt 4 的传统桌面应用程序风格向 HTML5＋Qt 5 的混合开发转变。然而 Qt 4 的 LDE 仍将获得安全更新和少量功能更新，直到基于 Qt 5 的 LDE 2 完全成熟。

LDE，全名为 Loongson Desktop Environment，可在龙芯等 mipsel 平台上执行。LDE 项目旨在向龙芯用户提供一个低硬件门槛的桌面环境，在轻量化的前提下，尽可能实现更强大的功能。LDE 以 Qt 作为图形界面库，有强大的移植性，在 mipsel 以外的平台也可编译运行。LDE 提供了一些配套的可独立运行元件。LDE 使用 Openbox 为其默认视窗管理器，并且希望能够提供一个建立在可独立的套件上的轻巧而快速的桌面。
一些信息
---
### 源码包括
* Looplorer 网页浏览器，以 webkit 为内核，有可保存书签功能，提供用户书签文件用于修改。
* LooFTP FTP 客户端。
* Initlde 会话管理器，当使用者启动会话时，建立桌面环境并自动启动程序的工具。
* Looget 可指定存储位置，带进度条的下载工具。
* Lootepad 文字编辑器，基于 Qt 的文本编辑器。最新的版本支持恢复功能。
* Loogout 注销管理器。
* LRun 程序快速启动器。
* Ldeabout 内嵌于 LDE 软件中，显示 LDE 版本、作者等信息的模块。
* Ldecc LDE 控制中心，控制硬件与软件的各项设置。
* LooFM 文件管理器，有基本文件、文件夹操作功能。

### 已经测试支持的Linux系统/版本:
* Linux Mint 16/17/17.1
* Debian stable/testing/sid
* Gentoo
* OpenSuse 13.1/Factory
* Ubuntu 13.10-14.10/15.04 Alpha 1

LDE 理论上支持所有 Linux 发行版

###已经测试编译通过的平台:
* MIPS (little endian)
* amd64
* i386

其他平台可自行测试。
安装
---
用户可以从 Github 的 Releases 中获取已编译完成的二进制安装包。
同样也可以直接到 ftp://ftp.loongsoner.com/LDE 下载安装包

同一目录下的 ldemanual.txt/ldemanual.abw 是两种格式的用户手册，里面有安装方法。
共同开发
---
### 贡献代码
LDE 使用 Git 作为版本控制系统. 我们所有的代码都可以在 Github 找到

你可以直接从 Github Clone 一份 LDE-Stable 的源码

    git clone https://github.com/xuzhuoyi/LDE-Stable/
    
正在开发的 LDE 2 是采用全新技术的版本，你也可以参与开发

    git clone https://github.com/xuzhuoyi/LDE/
Git 的更多信息，参见官方网站: http://git-scm.com/
### 撰写文档
ldemanual.txt/ldemanual.abw 是两种格式的用户手册，你可以修改或添加里面的内容
### 报告 Bugs
我们所有的问题都记录在 GitHub 上。
