#include <iostream>

using namespace std;

class Band
{
	protected:
		int count;
		virtual int getcount()=0;
	
	private:
		string name;
			
	public:
		string getname()
		{
			return this->name;
		}
		
		void setname(string name)
		{
			this->name=name;
		}
		
};

class MetalBand: public Band
{
	private:
		int mem;
		int tech;
	
	public:
		
	void setMember(int mem)
	{
		this -> mem = mem;
	}
	
	void setTech(int tech)
	{
		this -> tech = tech;
	}
	
	int getTech()
	{
		return this -> tech;
	}
	
	int getcount()
	{
		count = mem + tech;
		return count;
	}
};


int main()
 {
 	MetalBand M;
 	M.setMember(3);
 	M.setTech(1);
 	M.setname("Metal Band");
 	cout << M.getname() << endl;
 	cout << M.getcount() << endl;
 }

