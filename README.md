# IntoBike

## 1. 概述

IntoBike是IntoRobot平衡车工程。主控采取neutron模块。

## 2. 工程结构

IntoBike工程结构如下：

```
|-- docs            : 工程文档
|-- lib             : 工程依赖库
|-- release         : 编译和发布脚本
|-- src             : 工程代码
|-- intoyuniot.ini  : 编译配置文件
 -- README.md
```

## 3. 编译与调试

IntoBike 采取intoyuniot编译，具体如下：

```
intoyuniot run -e intobike -t clean   # 清除临时文件

intoyuniot run -e intobike -t upload  # 编译和下载

```

## 4. 发布

进入release, 运行./release.sh

```
1. 生成产品软件包
2. 上传产品软件包
3. 进入生产平台

```

