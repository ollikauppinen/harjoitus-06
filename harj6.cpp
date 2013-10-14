#include <iostream>
using namespace std;
int main()
{
	double luku1;
	double luku2;

	cout <<"Kuinka paljon sinulla on rahaa lompakossasi?\n";
	cin >> luku1;
	cout <<"\nKuinka paljon yksi lihapiirakka maksaa?\n";
	cin >> luku2;
	
	if (luku1>=luku2)
	{
		luku1 = luku1-luku2;
		cout<<"Rahapussiin piirakan jälkeen jäi: " << luku1 <<"€\n";
	}
	else
	{
		cout<<"\nAla paastoamaan";
	}
}
