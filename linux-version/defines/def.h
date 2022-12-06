/*
 *	作者：c_cpp_a(Github) 
 *	最近更新：2022/12/4
 *	功能简述：这是游戏的基本定义部分。负责常量、enum。当然为了游戏的编写方便，这里的显示字符映射使用了std::map。 
 */ 
//For some reasons, the English version notes will not be displayed here. 
#ifndef DEF
#define DEF
//include STL
//导入标准库 
#include<map>
enum{//地图里面的方向 
	defaults,//默认 
	ups,//上 
	downs,//下 
	lefts,//左 
	rights//右 
};
enum{//地图的基本元素 
	floor,//空地（默认） 
	rock,//岩石 
	door,//传送门 
	ball//小球 
};
enum{//游戏的语言 
	unable,//未定义（默认） 
	Chinese,//中文 
	English//英文 
};
enum{//彩蛋的类型 
	empty_egg, //空彩蛋（默认，就是没有彩蛋） 
	CHI_egg_1,//中文彩蛋1 
	UNABLE_egg_1//[未命名]彩蛋1 
};
enum{//游戏模式 
	normal,//正常（默认） 
	debugger,//开发者模式 
	infernal,//地狱模式 
	AIOC//清一色模式
	/*
	 *	目前的模式的介绍：
	 *	普通模式：普普通通的，一切都按正常的来 
	 *	开发者模式：显示坐标，以后还会显示别的东西。
	 *	地狱模式：把所有东西都弄到屏幕的左边，总之是非常难。 
	 *	清一色模式：所有的东西（空地除外）都显示成-，让你猜。 
	 */
};
std::map<size_t,char> print_c={//对应元素显示成什么样 
	{floor,' '},
	{rock,'-'},
	{door,'@'},
	{ball,'o'}
};
const int COLS=100,LINES=50;//游戏的窗口大小 
const int ADD_COLS=20,ADD_LINE=10;//成就的新增窗口大小 
const int MODE_COUNT=4,LANGUAGE_COUNT=3,DIRECT_COUNT=5;//模式的种数、语言的种数和方向的种数 
const char SAVE_NAME[]="data.mymap";//保存文件名（未实装） 
const int EGG_POS[LANGUAGE_COUNT][10][2]={{5,5},{10,10},{2,2}};//EGG_POS[language][egg_number]={x,y}，存储彩蛋的触发坐标 
const char mode_content[LANGUAGE_COUNT][MODE_COUNT][101]={//模式的介绍(mode_content[language][mode]=s)
	{},//未定义的自然什么都没有啦 
	{"正常的模式","开发者模式","地狱的模式","清一色模式"},//中文 
	{"normal","debugger","infernal","all in one color"}//英文 
};
const char direct_content[LANGUAGE_COUNT][DIRECT_COUNT][101]={//方向对应的名称
	{},//未定义的自然什么都没有啦 
	{"?","上","下","左","右"},//中文
	{"?","up","down","left","right"}//英文 
};
#endif 
