1.目标
~~8.12: 9 10 11级~~
~~8.13: 12 13 14级~~
8.14:15级 优化剑动作  角色 角色姿势
8.15:学习手搓地形 地图设计 角色碰撞问题  
8.16:地图设计开发 游戏性设计 AI放置
8.17:游戏CG 音乐/声音/设置 优化
8.18:封装打包
8.19:休息 准备黑神话
8.24——30:修改项目 优化


一些BUG：
人物替换/ 穿模
武器/剑 非使用状态禁止combo
替换Anim  攻击  防御的Anim  远程的Anim
翻滚的动作 替换 并且 禁止翻滚时跳跃 蹲 。。。其他动作
这个暑假做出一个第三人称射击游戏 打僵尸
下学期开始魂类

```cpp
一. UE4程序的职业生涯：新手村 - 核心骨干 - 江湖高手 - 坐镇大神 - 行业大佬

1. 新手村：学习引擎
    - 学习编辑器的使用，蓝图实现小功能
    - 其他模块：动画、AI、材质、UMG、网络、粒子等
    - 学会下载 / 配置 / 使用插件
    - **进阶标志：**独立**做个小游戏**
2. 核心骨干：掌握引擎
    - 用 C++ 实现模块（如在库函数里实现计算逻辑；只懂 Actor，不懂 Object / 只懂 Object，不懂 Asset）
    - 用 C++ 编写特定模块（如战斗逻辑，AI 等）
    - 开始思考 C++ 和 BP 如何更好地结合，收集整理常用 C++API
    - 开始创造自己的插件，明确专攻的方向
    - **进阶标志：灵活正确的结合使用 C++ 和 BP**
3. 江湖高手：懂得引擎
    - 开始研究并理解引擎里各模块的机制原理
    - 开始在 C++ 层面开发支撑类和功能，引擎扩展 Slate，改造渲染等
    - 可以小改引擎 Hack，修复引擎 bug
    - **进阶标志：对引擎的各个模块，都可以找到源码并分析和扩展遗漏的功能（缺的只是时间）**
4. 坐镇大神：超越引擎
    - 可以重写某个引擎模块，且质量超越原作
    - 日常负责优化引擎来适配项目
    - 改造引擎的一部分，改造开发配套流程，并能有机高效的融合进工作流
    - **进阶标志：引擎变为项目框架工作流中的一个工具，视野全局**
5. 行业大佬：创造引擎

- 对引擎整体结构了如指掌
- 可以站在引擎行业的高度创造更高生产力的工具
- 编写的引擎功能或插件，对行业造成了深远影响
- **进阶标志：从行业的高度来思考**事情****

二、虚幻C++六大问（what why who when which how）

1. What——什么是虚幻 C++？（入门虚幻 C++）
    - 扎实的标准 C++ 基础
    - 用C++编写游戏逻辑
    - 适应虚幻引擎的底层C++框架
        - ① 模块的配置和插件的使用
        - ② 了解 UnrealBuildTool（虚幻编译工具，简称UBT）和 UnrealHeadTool（虚幻头文件分析工具，简称UHT）
        - ③ 掌握 Core 模块的 C++ 库（FString 字符串，TArray 数组，UE_LOG等）
        - ④ 熟悉了解掌握 CoreUObject（宏，GC 垃圾回收，序列化等）
        - ⑤ 熟悉 C++ 与 BP 的交互方式
2. What——学会虚幻 C++ 的标志是什么？
    - 懂得解决各种编译链接错误（这类错误常是因为模块配置出错）
    - 懂得常见编写套路（如 CreateDefaultSubObject，UPROPERTY 等）
    - 理解 UObject 的内存管理机制，不会经常 Crash 内存崩溃
    - 可以在源码里找到自己想要的代码块
3. Why——为什么虚幻要开放 C++ 来编写 GamePlay?
    - 提升性能（UE 定位偏向制作 3A 项目，更需要压榨机能，因此需要更底层，才有能力优化性能）
    - 强类型语言更有能力管理大项目（强类型语言是一种强制类型定义的语言，即一旦某一个变量被定义类型，如果不经强制转换，那么它就永远是该数据类型了。C++、C#、Java都是强类型语言，PHP、JS等是弱类型语言）
    - 更开放，更灵活的定制性（因为引擎也是C++开发）
    - 更易迭代，不需要时时更新接口层
    - 更相信开发者，C++ 开发者也更需要自我负责的觉悟，门槛也更高。在开发过程中，下限较低（对新手程序会有各种调试问题），但上限很高。
    - 蓝图一定程度上降低了上手难度
4. Why——为什么要学虚幻 C++？
    - 方便扩展功能，C++ 可以直达引擎底层结构，但蓝图不行
    - 更好的性能，且可以针对性能热点进行优化
    - 方便调试引擎，理解引擎流程和修复 bug
    - 学习游戏引擎知识的好途径，UE 本身就是一个完善且优秀的开源项目，可以拿来参考学习很多像设计模式等等的知识，不用实在可惜。
    - 大项目需要 hold 得住的语言
    - 对于程序员而言，虚幻 C++ 是从初级到中级的标志，相比之下其他领域可以不学
5. Why——为什么不能只用蓝图？!

- - 灵活度与上手难度比较，C++ 最难但也最灵活
    - 蓝图与 C++ 单独用都不是最好的选择，[平衡蓝图与C++]
    - 蓝图无法实现定制化需求
    - 游戏逻辑只能有限优化
    - 不看代码难以理解别人开发的插件底层逻辑
    - 大项目多人开发很难管理（文本化编辑语言有固有的优势）
    - 蓝图只能使用工具，但 C++ 可以创造工具

6. Who——谁需要学 C++？

- - 核心系统 GamePlay 程序员
    - 可能需要扩展引擎的人，TA（技术美术），渲染等
    - 引擎工具编写人员
    - 引擎部的支持人员

7. When——什么时候推荐开始学虚幻 C++?

- - 可以熟练使用蓝图进行开发
    - 已经熟悉引擎 GamePlay 框架概念（如 PlayerController，GameMode，PlayerState，网络复制等）
    - 已经学会使用引擎各模块功能（如动画蓝图、AI 行为树、UMG 触发等），可以在日常工作中熟练使用引擎（实事求是的掌握了）

8. When——什么时候算学会了蓝图？

- - 蓝图太易用，导致不受重视或者被低估
    - 蓝图五脏俱全，类、结构、枚举、接口、回调什么都有
    - 蓝图也可以讲究设计模式与结构，好与坏的蓝图程序差距很大
    - 蓝图程序也要易于重构（职责划分清楚），蓝图也可以数据驱动，灵活掌握引擎提供的各种辅助工具，并有机的结合
    - 可以做到，不代表要时时如此，特别是做原型的时候（需要速度的时候设计模式与程序架构不需要最优先考虑）
    - 用蓝图实现游戏时有良好的结构和设计

9. Which——虚幻 C++ 有哪些学习要点？

- - 源码中的 Core 部分（学习文件夹位置：UE4-> Source-> Runtime-> Core）
        - ① 巩固 C++11 基础，需要学习到能看懂 TArray，TSet，TMap 等各种容器，对 FString，FName，FText 进行相互转换（推荐《inside the c++ object model》理解 C++ 底层）
        - ② 理解 TSharedPtr 共享指针，TSharedRef 共享引用，TWeakPtr 弱指针等各种[智能指针]
        - ③ 理解 [Delegate 委托]
        - ④ 多看看设计模式，能更好理解 UE 代码结构
        - ⑤ 了解多线程，才能用好 FRunnable 等多线程同步
        - ⑥ 能用人脑展开宏
    - GamePlay 模块（学习文件夹位置：UE4-> Engine-> Classes-> GameFramework ）
        - ① Actor 创建，组装 Component，BeginPlay，Tick，碰撞输入事件绑定等
        - ② 引擎 GamePlay 对象的继承，组织与使用
        - ③ UObject 自定义对象的组织管理（根据逻辑而定）
        - ④ 引擎数据对象的使用，Config，Datatable
        - ⑤ 功能模块的 C++ 层级编写，注意 C++ 与蓝图的结合
    - Module-UBT-C#
        - ① 把 C# 当成脚本化的配置文件就可以了
        - ② 完整编译流程：
            - 首先，UBT 搜集目录中的 .cs文件；
            - 然后，UBT 调用 UHT 分析 .h / .cpp文件，生成 generated.h 和 gen.cpp文件，文件路径为 Intermediate-> Build-> Win64-> UE4-> Inc
            - 最后，UBT 调用 MSBuild，将 .h / .cpp 和 generated.h / gen.cpp 结合到一起然后编译
            - Build.cs 是重点（ModuleRules.cs）
        - ③ Public 和 Private 包含：只暴露能被引用的部分
    - 反射-UHT
        - ① 理解 generated.h 和 gen.cpp
        - ② 理解 MODULENAME_API 含义（用来做dll导出的，容易出错）
        - ③ 掌握常用宏的含义和用法（反射的重要标记）：UCLASS、USTRUCT、UENUM、UPROPERTY、GENERATED_BODY等
        - ④ 清晰理解类型和对象的关系（ClassReference 类型引用、ObjectReference 对象引用）
        - ⑤ 掌握通过反射遍历对象属性、读取写入
        - ⑥ 掌握通过反射遍历对象函数并调用的方式
        - ⑦ 通过对象找类型，通过类型找对象
        - ⑧ 理解 “对象用类型描述，类型也是对象”
        - UE4反射机制概要
            - ① 首先了解反射：反射是指在运行状态下，可以构造任意一个类的对象，可以了解任意一个对象所属的类，可以了解任意一个类的成员变量和方法，可以调用任意一个对象的属性和方法。（包括在编译时未确定的类或者对象）这种动态获取程序信息以及动态调用对象的功能称为反射。
            - ② 支持反射的语言有Java、C#等等，但C++本身是不支持反射的，所以UE4在C++基础上搭建了一套自己的反射系统。通过反射，UE4可以实现序列化，GC(垃圾回收），网络复制，C++蓝图通信等重要功能。
            - ③ 当一个头文件中include了“xxx.generated.h“，意味着这个头文件加入了反射系统。那些UPROPERTY,UFUNCTION之类的宏，也标记着这些方法属性等等加入了UE4的反射系统，加入了反射系统，UE4才能帮你做GC（垃圾回收），你才能实现蓝图C++通信等等很多功能。
            - ④ UnealBuildTool和UnrealHeadTool可以看作是UE4实现反射系统的工具。
        - UBT通过扫描头文件，记录所有包含反射类型的modules（模块），当其中有头文件改变时，就会用UHT更新反射数据。UHT解析头文件，扫描标记，生成用于支持反射的C++代码。
    - CoreUObject
        - ① GC（垃圾回收）：
        - UE4采用了标记清扫的垃圾回收方式。从一个Root集合出发，遍历所有存在引用关系的对象。遍历完成后就可以标记出存在引用的和没有引用的了，然后清理掉不存在引用的对象。
        - GC方式可以类比C#，有UPROPERTY标记才能被引擎GC。
        - UE4重载了new、delete关键字，不要使用。
        - FGCObject : :AddReferencedObjects可以手动添加不希望被垃圾回收的UObject的硬引用。
        - ② ClassDefaultObject（类默认对象）：理解类型和对象实例化，模版
        - 理解ClassDefaults作为模版的作用
        - 理解ClassDefaultObject在序列化中的意义作用
        - 通过UClass : : GetDefaultObject可以获得ClassDefaultObject的信息
        - ③Package：理解对象的相互组织方式
        - 对象可以包含子对象
        - 序列化时，把一系列对象用一个对象包起来，这一个对象叫Package
        - Package也可以互相引用，根据对象相对路径
    - 常见套路
    - 各模块“地方习俗”
        - 专攻各模块内独有的特性

10. Which——虚幻C++中有哪些套路需要掌握？

- - 模块链接：几个常用属性.AddRange  
        比如最近我要在C++中引用到NiagaraComponent，但却找不到头文件  
        此时需要在项目的build.cs中添加模块链接
- - 创建Actor方法：ConstructorHelpers，CreateDefaultSubobject，SetupAttachment
    - GamePlay框架继承  
        ① 尽量别在关卡蓝图写逻辑：个人认为那些不复用的，关卡自身的特殊逻辑，触发一些事件之类的还是写在关卡蓝图比较方便，比如我们在做的解谜游戏，每关都会有一些特殊的关卡设计。但如果做一个吃鸡类游戏，关卡蓝图中应该是很干净的。  
        ② 遵循引擎结构，善用GamePlay框架比如GameInstanse，GameMode，GameState，PlayerController等，继承使用，后期扩展和联机会十分友好。
    - C++与蓝图交互  
        ① UPROPERTY UFUNCTION宏的使用，各种函数属性说明符BlueprintCallable，EditAnywhere等等。  
        [官方文档-函数说明符](https://link.zhihu.com/?target=https%3A//docs.unrealengine.com/zh-CN/Programming/UnrealArchitecture/Reference/Functions/index.html)[官方文档-属性说明符](https://link.zhihu.com/?target=https%3A//docs.unrealengine.com/zh-CN/Programming/UnrealArchitecture/Reference/Properties/Specifiers/index.html)  
        ② C++基类写逻辑，蓝图继承然后可视化配置数据。这种方式易扩展高性能，十分舒服。  
        ③ 善用函数库。
    - 事件绑定  
        ① DELEGATE(委托）,MULTICASTDELEGATE（多播）,DYNAMIC（动态）  
        ② 输入事件绑定：BindAxis，BindAction  
        ③ 碰撞事件绑定：Hit，Overlap（AddDynamic）  
        ④ Slate&UMG Event：SLATE_EVENT(FOnClicked，OnClicked）  
        ⑤ 计时器：FTimerManager：：SetTimer，ClearTimer
    - 引擎常用方法  
        ① Engine/Class/Kismet中的各种库十分有用。  
        ② Kismet/GamePlayStatics很常用，可以访问GamePlay的很多对象。  
        ③ UKismetSystemLibrary，系统目录等功能。  
        ④ UKismetMathLibrary，数学库。

11. Which——有哪些编码注意事项？

- - 用插件在项目间共享代码，动手编码前多思考架构
    - 变量类型尽量偏向抽象基类，比如声明一个粒子的引用时，使用UFXSystemComponent而不是ParticleSystemComponent或者NiagaraSystemComponent，可以适应多变的情况。
    - Include头文件时，请Include What You Use（只包含使用到的头文件），加快编译速度
    - 善用C++前置声明，加快编译
    - 善用蓝图函数库
    - C++代码里不要做数据配置。 尝试数据驱动或者在蓝图原型中配置数据。
    - 没有C++基类的蓝图类，可以重新设置基类，注意先备份。
    - 重构了C++基类名字，导致蓝图找不到父类？可以用[CoreRedirects]
    - 尽量不修改引擎代码，如果修改，做好注释或记录

12. Which——虚幻C++有哪些学习难点？

- - 数据结构与算法，操作系统，多线程
    - 数学物理相关知识例如线性代数等
    - 渲染，动画，AI等游戏开发知识
    - 足够的项目开发经验才能设计出强壮的代码框架
    - 理解不了别人的代码

13. How——如何学习虚幻C++?

- - 学会模仿代码比如模版项目，引擎源码，社区项目等
    - 模仿的基础上尝试修改
    - 学会总结与记录
    - 积累有用的代码功能块，对于概念，尝试用思维导图加深理解
    - 必须要项目实战

C++与蓝图的合适比例

- 根据80/20原则，20%核心用C++，80%表层用蓝图（根据项目类型和个人水平而定）
- 大概规则：  
    偏向引擎底层，偏向性能热点，偏向稳定的，采用C++  
    偏向表现层，偏向经常操作的，偏向多变的，采用蓝图
```