#include<iostream>
using namespace std;

class Test{
//	private : string username;
//	public : Test(){this -> username = "i am superman";}
//			 Test(string user){this -> username = user;}
//	string getuser(){
//		return username;
//	}
//	static string teststr(){
//		return "this is static";
//	}
//	
	public: void test(){
	  	cout << "this is test";
	}
};	
 
class Test2 : public Test{
	public: void test(){
	  	cout << "this is test1";
	}
};


