#include <iostream>
#include "Singleton.h"
int main()
{
	Singleton::GetInst()->ShowMessage();
	// GetInst() �Լ��� �̿��ؼ� �������� ����� �̱��� ��ü�� �����Ͽ� �Լ� ȣ��.
}
