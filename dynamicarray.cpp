//Responsibilities
//Blueprint, User Defined DataType, Abstarct Entity without values,Classification of Reald world Entity
#include <iostream>
#include <string>
using namespace std;
class DynamicArray{

   private:
		
		int index;
		int items[5];
		int count;
		void rezise(){};
		
  public : /* Default Interface */
  
          /* Default constructor*/
          DynamicArray(){
              this->index=-1;
              this->count=0;
          }
  
		void clear(){}
		void add(int data){
		this->index++;
		this->items[index]=data;
		}
		int getcount() const{
		    return this->count;
		}
		int getDataFromIndex(int index){
			return this->items[index];
		}
		void reverse(){}
		void sort(){}
		~DynamicArray(){
		}
		
};
void loadData(DynamicArray& instance){
		instance.add(10);
		instance.add(20);
		instance.add(30);
		instance.add(40);
		instance.add(50);
		instance.add(60);
		instance.add(70);
		instance.add(80);
		instance.add(90);
}

void instantiate(){
	DynamicArray instance1;//instance
	loadData(instance1);
	cout<<instance1.getcount()<<":"<<instance1.getDataFromIndex(7)<<endl;

}

int main(){
	int x=10;
	instantiate();
	return 0;
}
