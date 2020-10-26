
class Utils
{
public: 
	static int Gcd(int a, int b)
	{
		if (b != 0)
			return Gcd(b, a % b);
		else
			return a;
	}
};