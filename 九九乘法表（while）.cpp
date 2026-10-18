#include <iostream>

int main()
{
	int i;
	int j,k;//j控制行，k控制列 
    j=1;
	while(j<10){
        k=1;
		while(k<j+1){
			std::cout<<k<<"x"<<j<<"="<<j*k<<"\t "; 
            k++;
		}
	std::cout<<"\n";
    j++;
	}
	return 0;
}