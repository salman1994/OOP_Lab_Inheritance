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

class JazzBand: public Band
{
	private:
		int mem;
	
	public:
		
	void setMember(int mem)
	{
		this -> mem = mem;
	}
	
	int getcount()
	{
		count = mem;
		return count;
	}
};


int main()
 {
 	MetalBand M;
 	M.setMember(3);
 	M.setTech(1);
 	M.setname("Metal Band");
 	cout << "Band Name: " << M.getname() << endl;
 	cout << "Total Members: " << M.getcount() << endl << endl;
 	
	JazzBand J;
 	J.setMember(5);
	J.setname("Jazz Band");
 	cout << "Band Name: " << J.getname() << endl;
 	cout << "Total Members: " << J.getcount() << endl << endl;
 }

