#include <iostream>
#include <iomanip> // setw��Ҫ��ͷ�ļ�
using namespace std;
#define PI 3.1415926 // PI�곣��

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
#elif 0 // ������������
int main() {
	int i = 1;
	char c = 'd';
	double d = 11.11;
	bool b = false;
	cout << "int���ͣ�" << i << endl;
	cout << "char���ͣ�" << c << endl;
	cout << "double���ͣ�" << d << endl;
	cout << "bool���ͣ�" << b << endl;
	return 0;
}
#elif 0 // �������
int main() {
	int i = 0;
	double d;
	string s;
	cout << "����int����ֵ��" << endl;
	cin >> i;
	cout << "����double����ֵ��" << endl;
	cin >> d;
	cout << "����string����ֵ:" << endl;
	cin >> s;
	cout << "�����ֵ�ֱ�Ϊ i:" << i << ",d:" << d << ",s:" << s << endl;
	return 0;
}
#elif 0 // ��ʽ�����
int main() {
	// \n���з�
	cout << "\n\nδ��ʽ�����\n";
	cout << "Ints" << "Floats" << "Doubles" << "\n";
	// ������������ַ���ļ��
	cout << "\nsetw(15)��������ı����\n";
	cout << "Ints" << setw(15) << "Floats" << setw(15) << "Doubles" << "\n";
	// \t�Ʊ��
	cout << "\n\n�Ʊ�� \n";
	cout << "Ints\t" << "Floats\t" << "Doubles\t" << "\n";
	return 0;
}
#elif 0 // ���ú���
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
#elif 0 // ��ϰ1
int func(int x, int y) {
	return x + y;
}
int main() {
	cout << "������2������" << endl;
	int x, y;
	while (cin >> x) // ���벻Ϊ\n
	{
		if (cin >> y) { // ���벻Ϊ\n
			cout << "x��y������" << func(x, y) << endl;
		}
		else
		{
			break; // ����whileѭ�����
		}
		cout << "������2������" << endl;
	}
	return 0;
}
#elif 0 // ��ʶ��
/**
* �����ͣ�����������������
* ����ĸ�����֣��»�����ɣ����ǲ��������ֿ�ͷ
* ��ʶ��������C++�ؼ�����ͬ
* ��ʶ���������������ֵ���Ч��Χ��3��������ȫ�֡���������������
*/
#elif 1 // �����ռ�namespace
// Ϊ���ֲ�ͬ��������ͬ���ĺ����������޶��Ŀռ�
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
	cout << "��ǰ��ʱʱ�䣺" << c_timeout << endl;
	string url = RELEASE::BASE_URL;
	RELEASE::log();
	return 0;
}
#elif 0 // 

#endif // 0
