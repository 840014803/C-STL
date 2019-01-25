#include <iostream>
#include <vector>//尾部直接增加，尾部直接删除// 
using namespace std;
typedef vector<int> Vect;
int main()
{
	Vect V;
	int n,i,s,m;
	
	do
	{
		cin >>s;
		V.push_back(s);
	}while(getchar() != '\n');//用do whlie可以输入回车结束// 
	
	
	m = V.size();//大小// 
	
	Vect::iterator p = V.begin();//通过指针输出，繁琐// 
	
	while(p != V.end())
	{
		cout <<*p<<"\t";p++;
	}
	cout <<endl;

	for(i = 0;i < m;i ++)//以数组形式输出,方便// 
		cout <<V[i]<<"\t";
	cout <<endl;
	V[1] = 0;
	
	p = V.begin() + 2;//删除及插入都得用指针// 
	V.insert(p,9);//在1+2个前插入，成为第1+2个// 
	p = V.begin() + 4;
	V.erase(p);//删除第1+4个// 
	
	m = V.size();
	cout <<m<<endl;
	for(i = 0;i < m;i ++)
		cout <<V[i];
	return 0;
}
