#include <iostream>
#include <vector>//β��ֱ�����ӣ�β��ֱ��ɾ��// 
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
	}while(getchar() != '\n');//��do whlie��������س�����// 
	
	
	m = V.size();//��С// 
	
	Vect::iterator p = V.begin();//ͨ��ָ�����������// 
	
	while(p != V.end())
	{
		cout <<*p<<"\t";p++;
	}
	cout <<endl;

	for(i = 0;i < m;i ++)//��������ʽ���,����// 
		cout <<V[i]<<"\t";
	cout <<endl;
	V[1] = 0;
	
	p = V.begin() + 2;//ɾ�������붼����ָ��// 
	V.insert(p,9);//��1+2��ǰ���룬��Ϊ��1+2��// 
	p = V.begin() + 4;
	V.erase(p);//ɾ����1+4��// 
	
	m = V.size();
	cout <<m<<endl;
	for(i = 0;i < m;i ++)
		cout <<V[i];
	return 0;
}
