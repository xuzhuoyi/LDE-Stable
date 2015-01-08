/*
 * Copyright (C) 2014  Zhuoyi Xu <xzy476386434@vip.qq.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#include "init.h"
#include <QProcess>

//引导模式表
//mode 0   注销
//mode 1   正常启动
//mode 2   首次启动（无配置文件时）
//mode 3   升级后首次启动（配置文件版本过低时）
//mode 4   上次引导失败
//mode 6   调用系统 init 6

//判断引导模式，只实现了模式1


void Init::startInit()
{
    switch (initMode)
    {
    case 1 :
        runAutorun();
	
    //case 2 :
	
        //initUser();
        //runAutorun();
	
    //case 3 :
	
	...
    //case 4 :
     
        ...
    }
}

Init::Init()
{
    if (isFirstLogin())
        initMode = 2;
    else
        initMode = 1;
    startInit();
}

void Init::runAutorun()
{
  
    //QSetting autorun = new autorun
    //利用 QSetting 类存储 autorun.ini 存储配置文件
    //
    //...
  
    QProcess *mainProcess = new QProcess;
    mainProcess->start("openbox",NULL);
    QProcess *mainProcess2 = new QProcess;
    mainProcess2->start("/usr/bin/razor-panel",NULL);
}

//根据有无配置文件判断是否首次登录
bool Init::isFirstLogin()
{
  //if (isExist(lde.ini))  
  return false;
  //else return true
}

//判断是否升级
//bool Init::isUpdated()
//{


//}

