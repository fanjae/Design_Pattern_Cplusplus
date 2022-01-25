#include <iostream>
#include "Singleton.h"
int main()
{
	Singleton::GetInst()->ShowMessage();
	// GetInst() 함수를 이용해서 전역으로 선언된 싱글톤 객체에 접근하여 함수 호출.
}
