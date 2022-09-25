#ifndef PEOPLE_H_
#define PEOPLE_H_
//include STL
//�����׼�� 
#include<conio.h>
#include<map>
//include custom library
//�����Զ����
#include "def"
#include "Map.h"
#include "init.h"
class People{
	public:
		friend class Egg;
		friend int ::isegg(const int &lang,People &p);
	public:
		struct node{
			int x,y;
			node(int xx=-1,int yy=-1):x(xx),y(yy){}
			bool operator!=(const node a) const;
			bool operator==(const node a) const;
			bool check();
			node &operator=(const node &)=default;
		};
		static const node default_node;
	private:
		int move_f=defaults,lang;
		node pos;
		map<int,map<int,node> > doors;
		node check_xy(node x,const int &func); 
		const int back(const int &);
	public:
		People():move_f(defaults),lang(unable),pos({1,1}){}
		void set_f(Map &);
		void put_xy(Map &);
		inline const node at(int x,int y){
			return doors[x][y];
		}
//		void save(Map &);
//		void imports(Map &);
};
const People::node People::default_node={-1,-1};
#include "People.cpp"
#endif