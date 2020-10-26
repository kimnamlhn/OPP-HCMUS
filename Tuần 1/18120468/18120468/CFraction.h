class CFraction
{
private:
	int _num;
	int _den;
public:
	int getNum();
	int getDen();
	void setNum(int num);
	void setDen(int den);
public:
	CFraction();
	CFraction(int num, int den);
	~CFraction();
};