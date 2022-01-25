class Singleton
{
private:
	Singleton() { }	// 생성자를 private으로 막는다.
	~Singleton() { }

private:
	static Singleton* Inst; // 인스턴스 하나를 담을 수 있는 포인터 변수 선언. static으로 설정하여, 오직 하나만 존재하게 함.

public:
	static Singleton* GetInst();
	static void DestoryInst();
	static void ShowMessage();
};
	/* Inst를 가져오거나(get), 메모리를 해제(Destory) 할 수 있는 멤버 함수 선언 및 static 변수에 접근할 수 있어야함.
	외부에서 해당 함수를 쓸 수 있도록 public으로 설정한다. */