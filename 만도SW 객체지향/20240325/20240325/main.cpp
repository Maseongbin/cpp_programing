/*
// 문자열
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1 = "Slow", s2 = "steady";
	string s3 = "the race.";
	string s4;
	s4 = s1 + " and " + s2 + " wins " + s3;
	cout << s4 << endl;

	return 0;
}
*/

/*
// 문자열의 비교
#include <iostream>
#include <string>

using namespace std;

void main()
{
	string s1 = "Hello", s2 = "World";

	if (s1 == s2)
	{
		cout << "동일한 문자열입니다." << endl;
	}
	else
	{
		cout << "동일한 문자열이 아닙니다." << endl;
	}
	if (s1 > s2)
	{
		cout << "s1이 앞에 있습니다." << endl;
	}
	else
	{
		cout << "s2이 앞에 있습니다." << endl;
	}
}
*/

/*
// string 클래스를 사용해 입출력
#include <iostream>
#include <string>

using namespace std;

void main()
{
	string name;
	string address;

	cout << "이름을 입력하세요: ";
	cin >> name;
	cin.ignore();

	cout << "주소를 입력하세요: ";
	//cin >> address;
	getline(cin, address);

	cout << address << "의 " << name << "씨 " << "안녕하세요?";
}
*/

/*
// 멤버 함수 호출
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s = "When in Rome, do as the Romans.";

	int index = s.find("Rome");
	cout << index << endl;

	return 0;
}
*/

/*
// string 객체에서 문자 추출하기
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cout << "주민등록번호를 입력하시오: ";
	cin >> s;

	cout << " - 가 제거된 주민등록번호; ";
	for (auto& c : s)
	{
		if (c == '-')
		{
			continue;
		}
		cout << c;
	}
	cout << endl;

	return 0;
}
*/

/*
// 문자열의 배열
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string list[] = { "철수","영희", "길동" };

	for (auto& x : list)
	{
		cout << (x + "야 안녕!") << endl;
	}
	
	return 0;
}
*/