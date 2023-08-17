# 对拍模板 (Powered by @[tianbiandeshenghuo11](https://www.luogu.com.cn/user/752485))

本模板基于 CC0-1.0 知识共享协议开源。

模板下载地址：[Link](https://github.com/tianbiandeshenghuo/Beet_Matching_template)

**别忘了点亮右上角的小星星~**

宣传：[TBSH OJ](http://123.57.5.69)

**注意**，当前服务器即将到期。我们将会在不久后更新服务器。届时该网址将会失效。为您造成的不便，敬请谅解。

模板使用教程：
在下发模板中有几个文件。 `sol.cpp` 是暴力解法或正解，但一定是正确的。`xs.cpp` 是等待验证的程序。`checker.cpp` 是数据生成器。`bat.cpp` 是检验程序。

如果您当前的系统环境是 `Windows`，您无需修改 `bat.cpp`。

如果您当前的系统环境是**类** `Unix`（例如 `Linux`），您需要将 `bat.cpp` 中的 `if (system("fc t.out t.ans"))` 改为 `if (system("diff t.out t.ans"))`，`system("xs < t.in > t.out)"` 前后三行调用的 `system` 函数中的源程序名前加上 `./`。即更改为：`system("./xs < t.in > t.out)`。`systen("./checker %RANDOM% > t.in")` 需修改为 `system("./checker $RANDOM$ > t.in")`。

同时，本对拍模板提供 `Special Judge`。如您需要使用，请将 `if (system("fc/diff t.out t.ans"))` 改为 `if (system("spj.exe t.in t.out t.ans"))`。详细使用教程可参考 [洛谷帮助中心-Special Judge 功能说明](https://help.luogu.com.cn/manual/luogu/problem/special-judge)。

**注意**，任意程序开头**都不需要**加上 `freopen`。

数据生成器使用：

尽量不要让输出的东西太多，否则 `bat.cpp` 会运行很久才检测完一个测试点。

有的时候 `bat.exe` 卡死了，就在 `cmp` 或 `powershell` 中运行 `taskkill /f /im bat.exe`。结束其他程序相同。

目录下的 `delete.bat` 运行后会删除所有的 `.exe、.in、.out、.ans` 文件。

**最后**，所有程序的编译指令均为 `-O2 -Wall -std=c++14`。请您在对拍前自行将编译器目录添加至系统 `Path`。可参考：[百度经验-如何在环境变量中添加编译器](https://jingyan.baidu.com/article/b2c186c80a45b2c46ef6ff15.html)。
