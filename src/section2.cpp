#include <iostream>
#include <iomanip> // setw需要的头文件
using namespace std;
#define PI 3.1415926 // PI宏常量

#if 0
int main() {
	auto j = 11.2;
	auto k = 1;
	const auto i = j + k;
	cout << "hello world," << "i=" << i;
	return 0;
}
#elif 0
int main() { 
	cout << "2";
	return 0;
}
#elif 0 // 基本数据类型
int main() {
	int i = 1;
	char c = 'd';
	double d = 11.11;
	bool b = false;
	cout << "int类型：" << i << endl;
	cout << "char类型：" << c << endl;
	cout << "double类型：" << d << endl;
	cout << "bool类型：" << b << endl;
	return 0;
}
#elif 0 // 输入输出
int main() {
	int i = 0;
	double d;
	string s;
	cout << "输入int类型值：" << endl;
	cin >> i;
	cout << "输入double类型值：" << endl;
	cin >> d;
	cout << "输入string类型值:" << endl;
	cin >> s;
	cout << "输入的值分别为 i:" << i << ",d:" << d << ",s:" << s << endl;
	return 0;
}
#elif 0 // 格式化输出
int main() {
	// \n换行符
	cout << "\n\n未格式化输出\n";
	cout << "Ints" << "Floats" << "Doubles" << "\n";
	// 设置两个输出字符间的间隔
	cout << "\nsetw(15)设置输出文本宽度\n";
	cout << "Ints" << setw(15) << "Floats" << setw(15) << "Doubles" << "\n";
	// \t制表符
	cout << "\n\n制表符 \n";
	cout << "Ints\t" << "Floats\t" << "Doubles\t" << "\n";
	return 0;
}
#elif 0 // 调用函数
void hello() {
	cout << "print hello";
	cout << "world" << endl;
}

void method_plus(int a, int b) {
	cout << "a+b=" << (a + b) << endl;
}

int main() {
	hello();
	method_plus(1, 5);
	return 0;
}
#elif 0 // 练习1
int func(int x, int y) {
	return x + y;
}
int main() {
	cout << "请输入2个整数" << endl;
	int x, y;
	while (cin >> x) // 输入不为\n
	{
		if (cin >> y) { // 输入不为\n
			cout << "x和y处理结果" << func(x, y) << endl;
		}
		else
		{
			break; // 跳出while循环语句
		}
		cout << "请输入2个整数" << endl;
	}
	return 0;
}
#elif 0 // 标识符
/**
* 给类型，变量，函数起名字
* 由字母，数字，下划线组成，但是不能以数字开头
* 标识符不能与C++关键词相同
* 标识符的作用域是名字的有效范围，3种作用域：全局、函数、块作用域
*/
#elif 1 // 命名空间namespace
// 为区分不同库里面相同名的函数，名字限定的空间
namespace DEBUG {
	string BASE_URL = "www.t-mznfc.com";
	int timeout = 20;
	void log() {
		cout << "This is Debug env" << endl;
	}
}
namespace RELEASE {
	string BASE_URL = "www.mznfc.com";
	int timeout = 30;
	void log() {
		cout << "This is Release env" << endl;
	}
}

int main() {
	int c_timeout = DEBUG::timeout;
	cout << "当前超时时间：" << c_timeout << endl;
	string url = RELEASE::BASE_URL;
	RELEASE::log();
	return 0;
}
#elif 0 // 

#endif // 0
