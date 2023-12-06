#include <iostream>
#include <conio.h>
#include <thread>
#include <stack>
#include <string.h>
std::stack <int>Int_stack; //整数栈
std::stack <double>Double_stack;//浮点栈
std::stack <char>char_stack;//字符栈
std::stack <std::string>String_stack;//字符串栈
//数组倒转
void Gher_SenSwap(int si[]){ //如果INT栈不为空，排空
	while(!Int_stack.empty()){
		Int_stack.pop();
	}
	//将数组逐步压入栈
	for(int Gher_SenSwap_i=0;Gher_SenSwap_i < sizeof(si)/sizeof(si[0]);Gher_SenSwap_i++){
		Int_stack.push(si[Gher_SenSwap_i]);
	}
	//将栈内数组逐渐输出
	if(!Int_stack.empty()){
		for(int Gher_SenSwap_i1=0;Gher_SenSwap_i1 < sizeof(si)/sizeof(si[0]);Gher_SenSwap_i1++){
			si[Gher_SenSwap_i1]=Int_stack.top();
			Int_stack.pop();
		}
	}
	return;
}
//大小排序
void Ghar_Polender(int si[],int us,int men){//us负数为倒序，正为正序 men为数组数
	if(us<0){
	 for(int Ghar_Polender_i=0;Ghar_Polender_i<men;Ghar_Polender_i++){
		 for(int Ghar_Polender_i1=0;Ghar_Polender_i1<men;Ghar_Polender_i1++){
		    	 if(si[Ghar_Polender_i]>si[Ghar_Polender_i1]){
					 std::swap(si[Ghar_Polender_i],si[Ghar_Polender_i1]);
				 }
		 }
	 }//倒序算法
	}
	if(us>0){
		for(int Ghar_Polender_i=0;Ghar_Polender_i<men;Ghar_Polender_i++){
			for(int Ghar_Polender_i1=0;Ghar_Polender_i1<men;Ghar_Polender_i1++){
				if(si[Ghar_Polender_i]<si[Ghar_Polender_i1]){
					std::swap(si[Ghar_Polender_i],si[Ghar_Polender_i1]);
				}
			}
		}//正序算法
	}
	if(us==0){std::cout << "顺序函数ereer"<<std::endl;return;}
	return;
}
//装换为二进制
int Ghar_ToweSers(int i){
	bool Ghar_ToweSers_i=true;
	std::string Ghar_ToweSers_S;
	while(!Int_stack.empty()){ //顺序清栈
		Int_stack.pop();
	}
	while(Ghar_ToweSers_i){ //二进制换算
		if(i!=1){
		 Int_stack.push(i%2);
		 i=i/2;
		}else{
			Int_stack.push(1);
			Ghar_ToweSers_i=false;
		}
	}
	while(!Int_stack.empty()){
		Ghar_ToweSers_S=Ghar_ToweSers_S+std::to_string(Int_stack.top()); //string合并
		Int_stack.pop();
	}
	i=std::stoi(Ghar_ToweSers_S); //string装换int类型
	return i;
}

























