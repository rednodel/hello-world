#include<iostream>
void fun1(int in)
{
	if(in < 0) throw in;
	else
	{
		std::cout<<"input is OK"<<std::endl;
	}
}
int main()
{
	int input;
	std::cin>>input;
	try
	{
		fun1(input);
	}
	catch (int input)
	{
		std::cout<<"can't inpput the num : "<<input<<std::endl;
	}
	return 0;
}