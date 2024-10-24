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
		void crank(){}
		void halt(){}

};
//High Level Module , consumer,client
class TataCar{
	IICEngine* _engine;
	public:
		TataCar(IICEngine* engine): _engine{engine}{
		    	cout<<"car constructed"<<endl;
		}
		void start(){
			_engine->crank();
			cout<<"engine started"<<endl;
		}	
		void stop(){
			_engine->halt();
				cout<<"engine halted"<<endl;
		}

};

int main(){
		VericoreEngine _vericoreEngine;
		TataCar _hexaIstance {&_vericoreEngine};
		_hexaIstance.start();
		_hexaIstance.stop();
}
