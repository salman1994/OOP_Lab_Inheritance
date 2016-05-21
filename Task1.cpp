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

class MarchingBand: public Band
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

class Symphony: public Band
{
	private:
		int mem;
		int con;
	
	public:
		Symphony()
		{
			con = 1;
		}
		void setMember(int mem)
		{
			this -> mem = mem;
		}
		
		int getTech()
		{
			return this -> con;
		}
		
		int getcount()
		{
			count = mem + con;
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
 	
 	MarchingBand K;
 	K.setMember(7);
	K.setname("Marching Band");
 	cout << "Band Name: " << K.getname() << endl;
 	cout << "Total Members: " << K.getcount() << endl << endl;
 	
 	Symphony S;
 	S.setMember(9);
	S.setname("Symphony");
 	cout << "Band Name: " << S.getname() << endl;
 	cout << "Total Members: " << S.getcount() << endl << endl;
 }

