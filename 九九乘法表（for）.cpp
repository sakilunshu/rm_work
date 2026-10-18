#include <iostream>

int main()
{
	int i;
	int j,k;//j控制行，k控制列 
	for(j=1;j<10;j++){
		for(k=1;k<j+1;k++){
			std::cout<<k<<"x"<<j<<"="<<j*k<<"\t"; 
		}
	std::cout<<"\n";
	}
	return 0;
}