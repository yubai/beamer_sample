class CLCSSolver
{
public:
	CLCSSolver(string x, string y, string p);
	~CLCSSolver();
	void solv();
	int getMaxLength();
	string getCLCS();
protected:
	void solv(string x, string y, string p);
private:
	string _x, _y, _p;
	CLCSState *_states;
	CLCSState *_direct;
	enum {D_NNN, D_NNZ, D_NZZ, D_ZNZ};
};
