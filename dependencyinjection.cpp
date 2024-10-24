#include <iostream>
using namespace std;
class IICEngine{
	public:
			//pure virtual method;
			virtual void crank()=0;
			virtual void halt()=0;
};

//Low Level Module, Service
//VericoreEngine implemets contract i.e IICEngine
class VericoreEngine:public IICEngine{
	public:
		void crank(){cout<<"vericore engine cranked"<<endl;}
		void halt(){cout<<"vericore engine halted"<<endl;}

};
//High Level Module , consumer,client
class TataCar{
	IICEngine* _engine;
	public:
		TataCar(IICEngine* engine): _engine{engine}{}
		void start(){
			_engine->crank();//interaction/delegation
		}	
		void stop(){
			_engine->halt();
		}

};

int main(){
		VericoreEngine _vericoreEngine;
		TataCar _hexaIstance {&_vericoreEngine};
		_hexaIstance.start();
		_hexaIstance.stop();
}
