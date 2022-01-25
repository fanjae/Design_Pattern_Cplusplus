class Singleton
{
private:
	Singleton() { }	// �����ڸ� private���� ���´�.
	~Singleton() { }

private:
	static Singleton* Inst; // �ν��Ͻ� �ϳ��� ���� �� �ִ� ������ ���� ����. static���� �����Ͽ�, ���� �ϳ��� �����ϰ� ��.

public:
	static Singleton* GetInst();
	static void DestoryInst();
	static void ShowMessage();
};
	/* Inst�� �������ų�(get), �޸𸮸� ����(Destory) �� �� �ִ� ��� �Լ� ���� �� static ������ ������ �� �־����.
	�ܺο��� �ش� �Լ��� �� �� �ֵ��� public���� �����Ѵ�. */