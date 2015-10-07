description:	as we have editted a source file,which contains serval amounts of functions.Usually,it's better to test every function if it does really work before it is taken into use(i.e call it).So we can write a parser-tester,which parse a source file fisrt and then test each function AUTOMATICALLY.
		For example,we have a source file like:
			/*======main.cpp========*/
			#include<iosteram>
			using namespace std;

			class compareSet{
			public:
				bool operator()(const int a,const int b){return a<b;}
			};
			

			void preprocessA(int a);
			int preprocessB(int a);
			int main()
			{

				return 0;
			}

			void preprocessA(int a)
			{
			
			}
			int preprocessB(int a)
			{
				int ret;
				...
				return ret;
			}
	We'll call preprocess* both A and B.However,when it occurs some error in main(),we won't know which is wrong.To avoid this,we'd better test processA/B both before using it.
	A parser-tester may work like this:
		read sourcefile:  main.cpp;
		parse all the functions from the file,making sure that a function dependent on another will be parsed correctly,by like that parse them together;
		*AUTOMATICALLY give the parsed function an input;
		run the function;
		output the result;
	Well,it seems a little far away from doing my business.OK,I'm just expressing what I　thought.	
		
