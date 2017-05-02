#include "virtualMemoryManagerInterface.hpp"
#include <vector>

struct frame {
	
	int frameNum;
	bool valid = false;
	int time;

};


int numPages;
frame *pageTable;
int timer = 0;

//page table size is 2^virtualAddresSpaceSize / page size
//lookup page in table 
//does it have a frame associated with it 
//yes return adress plus offset
//if not swap page into frame based on policy

unsigned long long virtualMemoryManagerInterface::memoryAccess(unsigned long long address) {
	if (timer ==0) {// on first call allocate mem for page  table
		numPages = pow(2, virtualAddressSpaceSize) / N;
		pageTable = (frame*)malloc(sizeof(frame)* numPages);
	}

	int pageNumber = address / N;
	int offset = address%N;

	if (pageTable[pageNumber].valid) {//return address
		return pageTable[pageNumber].frameNum + offset;
	}
	else {//do swap 
		if(policy==0){//fifo
		
		

		}
		else{//lru
		
		
		
		
		
		}

	}

	}

